#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_noTag_17_ideal()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_noTag_17_ideal/pt_jet2_2017_QuadJet_noTag_17_ideal
//=========  (Wed Apr 26 16:41:51 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_QuadJet_noTag_17_ideal = new TCanvas("pt_jet2_2017_QuadJet_noTag_17_ideal", "pt_jet2_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   pt_jet2_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   pt_jet2_2017_QuadJet_noTag_17_ideal->Range(-109.1764,-0.003473945,585.8166,0.0254756);
   pt_jet2_2017_QuadJet_noTag_17_ideal->SetFillColor(0);
   pt_jet2_2017_QuadJet_noTag_17_ideal->SetFillStyle(4000);
   pt_jet2_2017_QuadJet_noTag_17_ideal->SetBorderMode(0);
   pt_jet2_2017_QuadJet_noTag_17_ideal->SetBorderSize(2);
   pt_jet2_2017_QuadJet_noTag_17_ideal->SetLeftMargin(0.15709);
   pt_jet2_2017_QuadJet_noTag_17_ideal->SetRightMargin(0.1234783);
   pt_jet2_2017_QuadJet_noTag_17_ideal->SetBottomMargin(0.12);
   pt_jet2_2017_QuadJet_noTag_17_ideal->SetFrameFillStyle(1000);
   pt_jet2_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   pt_jet2_2017_QuadJet_noTag_17_ideal->SetFrameFillStyle(1000);
   pt_jet2_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet2__124 = new TH1D("_QuadJet_noTag_ideal_pt_jet2__124","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(6,0.004377432);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(7,0.004675197);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(8,0.004953999);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(9,0.005173901);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(10,0.007459757);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(11,0.006163328);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(12,0.005124451);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(13,0.008395522);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(14,0.006675567);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(15,0.005494505);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(16,0.006465517);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(17,0.01010101);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(18,0.009302326);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(19,0.02150538);
   _QuadJet_noTag_ideal_pt_jet2__124->SetBinContent(21,0.01030928);
   _QuadJet_noTag_ideal_pt_jet2__124->SetEntries(0.1161772);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  141.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  44.36");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_pt_jet2__124->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_pt_jet2__124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_ideal_pt_jet2__124->SetLineColor(ci);
   _QuadJet_noTag_ideal_pt_jet2__124->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_noTag_ideal_pt_jet2__124->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_ideal_pt_jet2__124->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet2__124->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet2__124->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet2__124->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_ideal_pt_jet2__124->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet2__124->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet2__124->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet2__124->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet2__124->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet2__124->Draw("HIST");
   pt_jet2_2017_QuadJet_noTag_17_ideal->Modified();
   pt_jet2_2017_QuadJet_noTag_17_ideal->cd();
   pt_jet2_2017_QuadJet_noTag_17_ideal->SetSelected(pt_jet2_2017_QuadJet_noTag_17_ideal);
}
