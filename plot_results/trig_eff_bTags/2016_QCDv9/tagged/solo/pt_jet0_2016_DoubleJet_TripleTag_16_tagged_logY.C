#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_DoubleJet_TripleTag_16_tagged_logY()
{
//=========Macro generated from canvas: pt_jet0_2016_DoubleJet_TripleTag_16_tagged/pt_jet0_2016_DoubleJet_TripleTag_16_tagged
//=========  (Thu Apr 27 10:19:45 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_DoubleJet_TripleTag_16_tagged = new TCanvas("pt_jet0_2016_DoubleJet_TripleTag_16_tagged", "pt_jet0_2016_DoubleJet_TripleTag_16_tagged",0,0,600,600);
   pt_jet0_2016_DoubleJet_TripleTag_16_tagged->SetHighLightColor(2);
   pt_jet0_2016_DoubleJet_TripleTag_16_tagged->Range(-100,-0.5762585,566.6667,2.176027);
   pt_jet0_2016_DoubleJet_TripleTag_16_tagged->SetFillColor(0);
   pt_jet0_2016_DoubleJet_TripleTag_16_tagged->SetBorderMode(0);
   pt_jet0_2016_DoubleJet_TripleTag_16_tagged->SetBorderSize(2);
   pt_jet0_2016_DoubleJet_TripleTag_16_tagged->SetLogy();
   pt_jet0_2016_DoubleJet_TripleTag_16_tagged->SetLeftMargin(0.15);
   pt_jet0_2016_DoubleJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet0_2016_DoubleJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_tagged_pt_jet0__116 = new TH1D("_DoubleJet_TripleTag_tagged_pt_jet0__116","",50,0,500);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(8,1);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(9,1);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(10,6);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(11,19);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(12,26);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(13,34);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(14,26);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(15,42);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(16,35);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(17,34);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(18,30);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(19,27);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(20,31);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(21,23);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(22,27);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(23,25);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(24,26);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(25,16);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(26,15);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(27,17);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(28,20);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(29,14);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(30,11);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(31,10);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(32,13);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(33,8);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(34,10);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(35,10);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(36,8);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(37,7);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(38,7);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(39,9);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(40,1);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(41,2);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(42,8);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(43,1);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(45,1);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(46,2);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(47,1);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(48,3);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(49,3);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(50,1);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetBinContent(51,23);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetEntries(634);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_tagged_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 634    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  216.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  85.35");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_tagged_pt_jet0__116->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_tagged_pt_jet0__116);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_tagged_pt_jet0__116->SetLineColor(ci);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_tagged_pt_jet0__116->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_tagged_pt_jet0__116->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet0__116->Draw("HIST");
   pt_jet0_2016_DoubleJet_TripleTag_16_tagged->Modified();
   pt_jet0_2016_DoubleJet_TripleTag_16_tagged->cd();
   pt_jet0_2016_DoubleJet_TripleTag_16_tagged->SetSelected(pt_jet0_2016_DoubleJet_TripleTag_16_tagged);
}
