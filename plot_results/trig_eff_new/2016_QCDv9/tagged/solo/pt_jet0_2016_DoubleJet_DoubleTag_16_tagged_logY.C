#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_DoubleJet_DoubleTag_16_tagged_logY()
{
//=========Macro generated from canvas: pt_jet0_2016_DoubleJet_DoubleTag_16_tagged/pt_jet0_2016_DoubleJet_DoubleTag_16_tagged
//=========  (Thu Apr 27 10:18:37 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_DoubleJet_DoubleTag_16_tagged = new TCanvas("pt_jet0_2016_DoubleJet_DoubleTag_16_tagged", "pt_jet0_2016_DoubleJet_DoubleTag_16_tagged",0,0,600,600);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetHighLightColor(2);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->Range(-100,-0.5736099,566.6667,2.152189);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetFillColor(0);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetBorderMode(0);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetBorderSize(2);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetLogy();
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetLeftMargin(0.15);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_pt_jet0__119 = new TH1D("_DoubleJet_DoubleTag_tagged_pt_jet0__119","",50,0,500);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(9,1);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(10,9);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(11,21);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(12,22);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(13,32);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(14,29);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(15,40);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(16,30);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(17,23);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(18,17);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(19,24);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(20,17);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(21,21);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(22,16);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(23,18);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(24,18);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(25,11);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(26,12);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(27,6);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(28,11);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(29,9);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(30,10);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(31,7);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(32,8);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(33,6);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(34,3);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(35,4);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(36,6);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(37,3);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(39,7);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(40,3);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(41,2);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(42,5);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(43,2);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(44,2);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(46,1);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(47,1);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(48,1);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(51,14);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetEntries(472);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 472    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  201.9");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  81.36");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_pt_jet0__119);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->GetXaxis()->SetRange(1,50);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->Draw("HIST");
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->Modified();
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->cd();
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetSelected(pt_jet0_2016_DoubleJet_DoubleTag_16_tagged);
}
