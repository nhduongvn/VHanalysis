#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_QuadJet_TripleTag_16_tagged_logY()
{
//=========Macro generated from canvas: pt_jet0_2016_QuadJet_TripleTag_16_tagged/pt_jet0_2016_QuadJet_TripleTag_16_tagged
//=========  (Thu Apr 27 10:19:45 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_QuadJet_TripleTag_16_tagged = new TCanvas("pt_jet0_2016_QuadJet_TripleTag_16_tagged", "pt_jet0_2016_QuadJet_TripleTag_16_tagged",0,0,600,600);
   pt_jet0_2016_QuadJet_TripleTag_16_tagged->SetHighLightColor(2);
   pt_jet0_2016_QuadJet_TripleTag_16_tagged->Range(-100,-0.5899016,566.6667,2.298814);
   pt_jet0_2016_QuadJet_TripleTag_16_tagged->SetFillColor(0);
   pt_jet0_2016_QuadJet_TripleTag_16_tagged->SetBorderMode(0);
   pt_jet0_2016_QuadJet_TripleTag_16_tagged->SetBorderSize(2);
   pt_jet0_2016_QuadJet_TripleTag_16_tagged->SetLogy();
   pt_jet0_2016_QuadJet_TripleTag_16_tagged->SetLeftMargin(0.15);
   pt_jet0_2016_QuadJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet0_2016_QuadJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet0__110 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet0__110","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(6,1);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(7,3);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(8,15);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(9,25);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(10,30);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(11,40);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(12,40);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(13,52);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(14,34);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(15,54);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(16,35);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(17,32);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(18,33);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(19,26);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(20,29);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(21,23);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(22,30);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(23,26);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(24,24);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(25,17);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(26,16);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(27,18);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(28,18);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(29,15);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(30,11);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(31,9);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(32,13);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(33,8);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(34,9);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(35,10);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(36,8);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(37,7);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(38,7);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(39,8);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(40,1);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(41,2);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(42,8);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(43,1);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(45,1);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(46,2);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(47,1);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(48,3);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(49,3);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(50,1);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(51,23);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetEntries(772);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_tagged_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 772    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  195.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  88.53");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet0__110->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet0__110);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet0__110->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet0__110->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_tagged_pt_jet0__110->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__110->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet0__110->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__110->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_pt_jet0__110->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__110->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__110->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__110->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet0__110->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__110->Draw("HIST");
   pt_jet0_2016_QuadJet_TripleTag_16_tagged->Modified();
   pt_jet0_2016_QuadJet_TripleTag_16_tagged->cd();
   pt_jet0_2016_QuadJet_TripleTag_16_tagged->SetSelected(pt_jet0_2016_QuadJet_TripleTag_16_tagged);
}
