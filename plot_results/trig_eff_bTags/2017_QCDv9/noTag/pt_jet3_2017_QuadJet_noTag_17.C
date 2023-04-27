#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2017_QuadJet_noTag_17()
{
//=========Macro generated from canvas: pt_jet3_2017_QuadJet_noTag_17/pt_jet3_2017_QuadJet_noTag_17
//=========  (Thu Apr 27 10:19:52 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2017_QuadJet_noTag_17 = new TCanvas("pt_jet3_2017_QuadJet_noTag_17", "pt_jet3_2017_QuadJet_noTag_17",0,0,600,600);
   pt_jet3_2017_QuadJet_noTag_17->SetHighLightColor(2);
   pt_jet3_2017_QuadJet_noTag_17->Range(-109.1764,-0.01076923,585.8166,0.07897436);
   pt_jet3_2017_QuadJet_noTag_17->SetFillColor(0);
   pt_jet3_2017_QuadJet_noTag_17->SetFillStyle(4000);
   pt_jet3_2017_QuadJet_noTag_17->SetBorderMode(0);
   pt_jet3_2017_QuadJet_noTag_17->SetBorderSize(2);
   pt_jet3_2017_QuadJet_noTag_17->SetLeftMargin(0.15709);
   pt_jet3_2017_QuadJet_noTag_17->SetRightMargin(0.1234783);
   pt_jet3_2017_QuadJet_noTag_17->SetBottomMargin(0.12);
   pt_jet3_2017_QuadJet_noTag_17->SetFrameFillStyle(1000);
   pt_jet3_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   pt_jet3_2017_QuadJet_noTag_17->SetFrameFillStyle(1000);
   pt_jet3_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet3__22 = new TH1D("_QuadJet_noTag_pt_jet3__22","",50,0,500);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(5,0.002841022);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(6,0.004427023);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(7,0.006115797);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(8,0.008386674);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(9,0.008142954);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(10,0.007296365);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(11,0.007880911);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(12,0.008289375);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(13,0.009859576);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(14,0.007657658);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(15,0.01015572);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(16,0.009101251);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(17,0.003367003);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(18,0.006912442);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(19,0.007434944);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(20,0.0106383);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(29,0.06666667);
   _QuadJet_noTag_pt_jet3__22->SetEntries(0.1851737);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  183.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  83.78");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet3__22->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet3__22);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_pt_jet3__22->SetLineColor(ci);
   _QuadJet_noTag_pt_jet3__22->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet3__22->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_pt_jet3__22->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet3__22->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet3__22->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet3__22->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_pt_jet3__22->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet3__22->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet3__22->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet3__22->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet3__22->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet3__22->Draw("HIST");
   pt_jet3_2017_QuadJet_noTag_17->Modified();
   pt_jet3_2017_QuadJet_noTag_17->cd();
   pt_jet3_2017_QuadJet_noTag_17->SetSelected(pt_jet3_2017_QuadJet_noTag_17);
}
