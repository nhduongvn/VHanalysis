#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_noTag_18_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_noTag_18_ref/pt_jet3_2018_QuadJet_noTag_18_ref
//=========  (Thu Apr 27 10:20:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_noTag_18_ref = new TCanvas("pt_jet3_2018_QuadJet_noTag_18_ref", "pt_jet3_2018_QuadJet_noTag_18_ref",0,0,600,600);
   pt_jet3_2018_QuadJet_noTag_18_ref->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_noTag_18_ref->Range(-100,-1.060791,566.6667,6.536818);
   pt_jet3_2018_QuadJet_noTag_18_ref->SetFillColor(0);
   pt_jet3_2018_QuadJet_noTag_18_ref->SetBorderMode(0);
   pt_jet3_2018_QuadJet_noTag_18_ref->SetBorderSize(2);
   pt_jet3_2018_QuadJet_noTag_18_ref->SetLogy();
   pt_jet3_2018_QuadJet_noTag_18_ref->SetLeftMargin(0.15);
   pt_jet3_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet3_ref__24 = new TH1D("_QuadJet_noTag_pt_jet3_ref__24","",50,0,500);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(5,263199);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(6,315870);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(7,157336);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(8,83795);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(9,45918);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(10,26521);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(11,15635);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(12,9565);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(13,6149);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(14,3782);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(15,2489);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(16,1642);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(17,1164);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(18,760);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(19,531);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(20,350);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(21,246);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(22,193);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(23,147);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(24,94);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(25,70);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(26,46);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(27,52);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(28,35);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(29,21);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(30,17);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(31,16);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(32,8);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(33,8);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(34,7);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(35,4);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(36,7);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(37,7);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(38,1);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(39,4);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(40,6);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(41,1);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(42,1);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(43,1);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(44,1);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(48,1);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(49,1);
   _QuadJet_noTag_pt_jet3_ref__24->SetBinContent(51,4);
   _QuadJet_noTag_pt_jet3_ref__24->SetEntries(935705);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 935705 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  61.72");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  19.18");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet3_ref__24->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet3_ref__24);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_pt_jet3_ref__24->SetLineColor(ci);
   _QuadJet_noTag_pt_jet3_ref__24->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet3_ref__24->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_pt_jet3_ref__24->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet3_ref__24->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet3_ref__24->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet3_ref__24->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_pt_jet3_ref__24->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet3_ref__24->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet3_ref__24->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet3_ref__24->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet3_ref__24->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet3_ref__24->Draw("HIST");
   pt_jet3_2018_QuadJet_noTag_18_ref->Modified();
   pt_jet3_2018_QuadJet_noTag_18_ref->cd();
   pt_jet3_2018_QuadJet_noTag_18_ref->SetSelected(pt_jet3_2018_QuadJet_noTag_18_ref);
}
