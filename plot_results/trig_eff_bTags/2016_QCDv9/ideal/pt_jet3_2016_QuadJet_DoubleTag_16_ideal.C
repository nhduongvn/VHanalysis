#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_DoubleTag_16_ideal()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_DoubleTag_16_ideal/pt_jet3_2016_QuadJet_DoubleTag_16_ideal
//=========  (Thu Apr 27 10:19:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_QuadJet_DoubleTag_16_ideal = new TCanvas("pt_jet3_2016_QuadJet_DoubleTag_16_ideal", "pt_jet3_2016_QuadJet_DoubleTag_16_ideal",0,0,600,600);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal->SetHighLightColor(2);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal->Range(-109.1764,-0.08076923,585.8166,0.5923077);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal->SetFillColor(0);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal->SetFillStyle(4000);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal->SetBorderMode(0);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal->SetBorderSize(2);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal->SetLeftMargin(0.15709);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal->SetRightMargin(0.1234783);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal->SetBottomMargin(0.12);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_ideal_pt_jet3__256 = new TH1D("_QuadJet_DoubleTag_ideal_pt_jet3__256","",50,0,500);
   _QuadJet_DoubleTag_ideal_pt_jet3__256->SetBinContent(5,0.01785714);
   _QuadJet_DoubleTag_ideal_pt_jet3__256->SetBinContent(6,0.03375527);
   _QuadJet_DoubleTag_ideal_pt_jet3__256->SetBinContent(7,0.04186047);
   _QuadJet_DoubleTag_ideal_pt_jet3__256->SetBinContent(8,0.008196721);
   _QuadJet_DoubleTag_ideal_pt_jet3__256->SetBinContent(9,0.01136364);
   _QuadJet_DoubleTag_ideal_pt_jet3__256->SetBinContent(11,0.03921569);
   _QuadJet_DoubleTag_ideal_pt_jet3__256->SetBinContent(12,0.02941176);
   _QuadJet_DoubleTag_ideal_pt_jet3__256->SetBinContent(27,0.5);
   _QuadJet_DoubleTag_ideal_pt_jet3__256->SetEntries(0.6816607);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_ideal_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  215.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  82.98");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_ideal_pt_jet3__256->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_ideal_pt_jet3__256);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_DoubleTag_ideal_pt_jet3__256->SetLineColor(ci);
   _QuadJet_DoubleTag_ideal_pt_jet3__256->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_ideal_pt_jet3__256->GetXaxis()->SetRange(1,500);
   _QuadJet_DoubleTag_ideal_pt_jet3__256->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet3__256->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_pt_jet3__256->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet3__256->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_DoubleTag_ideal_pt_jet3__256->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet3__256->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet3__256->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet3__256->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_pt_jet3__256->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet3__256->Draw("HIST");
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal->Modified();
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal->cd();
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal->SetSelected(pt_jet3_2016_QuadJet_DoubleTag_16_ideal);
}
