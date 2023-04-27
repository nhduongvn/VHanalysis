#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_noTag_18()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_noTag_18/pt_jet3_2018_QuadJet_noTag_18
//=========  (Thu Apr 27 10:18:09 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_noTag_18 = new TCanvas("pt_jet3_2018_QuadJet_noTag_18", "pt_jet3_2018_QuadJet_noTag_18",0,0,600,600);
   pt_jet3_2018_QuadJet_noTag_18->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_noTag_18->Range(-109.1764,-0.05384615,585.8166,0.3948718);
   pt_jet3_2018_QuadJet_noTag_18->SetFillColor(0);
   pt_jet3_2018_QuadJet_noTag_18->SetFillStyle(4000);
   pt_jet3_2018_QuadJet_noTag_18->SetBorderMode(0);
   pt_jet3_2018_QuadJet_noTag_18->SetBorderSize(2);
   pt_jet3_2018_QuadJet_noTag_18->SetLeftMargin(0.15709);
   pt_jet3_2018_QuadJet_noTag_18->SetRightMargin(0.1234783);
   pt_jet3_2018_QuadJet_noTag_18->SetBottomMargin(0.12);
   pt_jet3_2018_QuadJet_noTag_18->SetFrameFillStyle(1000);
   pt_jet3_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_noTag_18->SetFrameFillStyle(1000);
   pt_jet3_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet3__22 = new TH1D("_QuadJet_noTag_pt_jet3__22","",50,0,500);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(5,0.001758553);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(6,0.003132709);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(7,0.005359405);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(8,0.006451998);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(9,0.006171224);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(10,0.006946542);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(11,0.007304415);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(12,0.006606544);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(13,0.006850432);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(14,0.007419184);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(15,0.007243461);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(16,0.005481121);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(17,0.006878762);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(18,0.00655308);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(19,0.005649718);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(20,0.01432665);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(21,0.004081633);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(22,0.005154639);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(23,0.006802721);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(24,0.0106383);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(25,0.01428571);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(26,0.02173913);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(28,0.02857143);
   _QuadJet_noTag_pt_jet3__22->SetBinContent(35,0.3333333);
   _QuadJet_noTag_pt_jet3__22->SetEntries(0.5287407);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  286.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  87.09");
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
   pt_jet3_2018_QuadJet_noTag_18->Modified();
   pt_jet3_2018_QuadJet_noTag_18->cd();
   pt_jet3_2018_QuadJet_noTag_18->SetSelected(pt_jet3_2018_QuadJet_noTag_18);
}
