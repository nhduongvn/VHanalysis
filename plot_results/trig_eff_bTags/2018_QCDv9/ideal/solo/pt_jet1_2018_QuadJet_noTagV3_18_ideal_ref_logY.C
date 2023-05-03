#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2018_QuadJet_noTagV3_18_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet1_2018_QuadJet_noTagV3_18_ideal_ref/pt_jet1_2018_QuadJet_noTagV3_18_ideal_ref
//=========  (Tue May  2 10:29:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2018_QuadJet_noTagV3_18_ideal_ref = new TCanvas("pt_jet1_2018_QuadJet_noTagV3_18_ideal_ref", "pt_jet1_2018_QuadJet_noTagV3_18_ideal_ref",0,0,600,600);
   pt_jet1_2018_QuadJet_noTagV3_18_ideal_ref->SetHighLightColor(2);
   pt_jet1_2018_QuadJet_noTagV3_18_ideal_ref->Range(-100,-0.6460828,566.6667,2.804445);
   pt_jet1_2018_QuadJet_noTagV3_18_ideal_ref->SetFillColor(0);
   pt_jet1_2018_QuadJet_noTagV3_18_ideal_ref->SetBorderMode(0);
   pt_jet1_2018_QuadJet_noTagV3_18_ideal_ref->SetBorderSize(2);
   pt_jet1_2018_QuadJet_noTagV3_18_ideal_ref->SetLogy();
   pt_jet1_2018_QuadJet_noTagV3_18_ideal_ref->SetLeftMargin(0.15);
   pt_jet1_2018_QuadJet_noTagV3_18_ideal_ref->SetFrameBorderMode(0);
   pt_jet1_2018_QuadJet_noTagV3_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTagV3_ideal_pt_jet1_ref__30 = new TH1D("_QuadJet_noTagV3_ideal_pt_jet1_ref__30","",50,0,500);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(9,19);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(10,94);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(11,152);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(12,135);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(13,113);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(14,106);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(15,71);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(16,74);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(17,70);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(18,59);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(19,54);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(20,36);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(21,33);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(22,25);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(23,28);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(24,19);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(25,18);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(26,12);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(27,6);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(28,15);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(29,10);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(30,8);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(31,15);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(32,7);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(33,6);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(34,6);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(35,2);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(36,8);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(37,3);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(38,2);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(39,1);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(40,1);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(41,1);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(42,1);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(45,2);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(47,4);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(48,3);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(50,1);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetBinContent(51,3);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetEntries(1223);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTagV3_ideal_pt_jet1_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1223   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  159.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  65.85");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTagV3_ideal_pt_jet1_ref__30);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->SetLineColor(ci);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->GetXaxis()->SetRange(1,50);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->GetYaxis()->SetTitle("Events");
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTagV3_ideal_pt_jet1_ref__30->Draw("HIST");
   pt_jet1_2018_QuadJet_noTagV3_18_ideal_ref->Modified();
   pt_jet1_2018_QuadJet_noTagV3_18_ideal_ref->cd();
   pt_jet1_2018_QuadJet_noTagV3_18_ideal_ref->SetSelected(pt_jet1_2018_QuadJet_noTagV3_18_ideal_ref);
}
