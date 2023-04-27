#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_QuadJet_DoubleTag_16()
{
//=========Macro generated from canvas: pt_jet2_2016_QuadJet_DoubleTag_16/pt_jet2_2016_QuadJet_DoubleTag_16
//=========  (Thu Apr 27 10:19:44 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_QuadJet_DoubleTag_16 = new TCanvas("pt_jet2_2016_QuadJet_DoubleTag_16", "pt_jet2_2016_QuadJet_DoubleTag_16",0,0,600,600);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet2_2016_QuadJet_DoubleTag_16->Range(-109.1764,-0.01468531,585.8166,0.1076923);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetFillColor(0);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetFillStyle(4000);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetBorderMode(0);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetBorderSize(2);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetLeftMargin(0.15709);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetRightMargin(0.1234783);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetBottomMargin(0.12);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetFrameFillStyle(1000);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetFrameFillStyle(1000);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_pt_jet2__28 = new TH1D("_QuadJet_DoubleTag_pt_jet2__28","",50,0,500);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(5,0.003664331);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(6,0.008492846);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(7,0.01241927);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(8,0.01536527);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(9,0.01557607);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(10,0.01646023);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(11,0.01705778);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(12,0.01648512);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(13,0.01756104);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(14,0.01548018);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(15,0.0172819);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(16,0.01563921);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(17,0.01380176);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(18,0.02000667);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(19,0.01357466);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(20,0.01714636);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(21,0.02564103);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(22,0.01782178);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(23,0.01486486);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(24,0.0124805);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(25,0.01298701);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(26,0.009036145);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(27,0.01602564);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(28,0.01574803);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(29,0.01834862);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(30,0.01685393);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(32,0.01886792);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(33,0.02970297);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(34,0.015625);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(37,0.02272727);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(38,0.03125);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(41,0.03846154);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(46,0.09090909);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(51,0.05714286);
   _QuadJet_DoubleTag_pt_jet2__28->SetEntries(0.6433641);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  260.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  124.5");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_pt_jet2__28->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_pt_jet2__28);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_DoubleTag_pt_jet2__28->SetLineColor(ci);
   _QuadJet_DoubleTag_pt_jet2__28->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_pt_jet2__28->GetXaxis()->SetRange(1,500);
   _QuadJet_DoubleTag_pt_jet2__28->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet2__28->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_pt_jet2__28->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet2__28->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_DoubleTag_pt_jet2__28->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet2__28->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet2__28->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet2__28->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_pt_jet2__28->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet2__28->Draw("HIST");
   pt_jet2_2016_QuadJet_DoubleTag_16->Modified();
   pt_jet2_2016_QuadJet_DoubleTag_16->cd();
   pt_jet2_2016_QuadJet_DoubleTag_16->SetSelected(pt_jet2_2016_QuadJet_DoubleTag_16);
}
