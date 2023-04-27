#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_noTag_18_tagged_ref_logY()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_noTag_18_tagged_ref/pt_jet0_2018_QuadJet_noTag_18_tagged_ref
//=========  (Thu Apr 27 10:20:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2018_QuadJet_noTag_18_tagged_ref = new TCanvas("pt_jet0_2018_QuadJet_noTag_18_tagged_ref", "pt_jet0_2018_QuadJet_noTag_18_tagged_ref",0,0,600,600);
   pt_jet0_2018_QuadJet_noTag_18_tagged_ref->SetHighLightColor(2);
   pt_jet0_2018_QuadJet_noTag_18_tagged_ref->Range(-100,-0.306705,566.6667,2.760345);
   pt_jet0_2018_QuadJet_noTag_18_tagged_ref->SetFillColor(0);
   pt_jet0_2018_QuadJet_noTag_18_tagged_ref->SetBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18_tagged_ref->SetBorderSize(2);
   pt_jet0_2018_QuadJet_noTag_18_tagged_ref->SetLogy();
   pt_jet0_2018_QuadJet_noTag_18_tagged_ref->SetLeftMargin(0.15);
   pt_jet0_2018_QuadJet_noTag_18_tagged_ref->SetFrameBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18_tagged_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet0_ref__60 = new TH1D("_QuadJet_noTag_tagged_pt_jet0_ref__60","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(6,6);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(7,32);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(8,53);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(9,94);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(10,104);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(11,111);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(12,150);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(13,110);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(14,120);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(15,116);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(16,113);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(17,100);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(18,102);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(19,89);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(20,83);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(21,72);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(22,71);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(23,58);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(24,57);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(25,42);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(26,34);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(27,49);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(28,41);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(29,30);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(30,22);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(31,25);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(32,27);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(33,16);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(34,22);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(35,14);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(36,14);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(37,10);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(38,5);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(39,14);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(40,14);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(41,12);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(42,12);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(43,6);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(44,11);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(45,8);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(46,4);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(47,4);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(48,4);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(49,3);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(50,2);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetBinContent(51,46);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetEntries(2132);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_pt_jet0_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2132   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  183.4");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  86.41");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_pt_jet0_ref__60->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_pt_jet0_ref__60);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_pt_jet0_ref__60->SetLineColor(ci);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_noTag_tagged_pt_jet0_ref__60->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_pt_jet0_ref__60->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet0_ref__60->Draw("HIST");
   pt_jet0_2018_QuadJet_noTag_18_tagged_ref->Modified();
   pt_jet0_2018_QuadJet_noTag_18_tagged_ref->cd();
   pt_jet0_2018_QuadJet_noTag_18_tagged_ref->SetSelected(pt_jet0_2018_QuadJet_noTag_18_tagged_ref);
}
