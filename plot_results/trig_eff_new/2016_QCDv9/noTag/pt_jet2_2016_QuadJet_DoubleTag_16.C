#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_QuadJet_DoubleTag_16()
{
//=========Macro generated from canvas: pt_jet2_2016_QuadJet_DoubleTag_16/pt_jet2_2016_QuadJet_DoubleTag_16
//=========  (Thu Apr 27 10:18:36 2023) by ROOT version 6.26/06
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
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(5,0.003617298);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(6,0.008511534);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(7,0.01228556);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(8,0.01535407);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(9,0.01560483);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(10,0.01625746);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(11,0.01709085);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(12,0.01644333);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(13,0.01752526);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(14,0.01553321);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(15,0.01730394);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(16,0.015625);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(17,0.01388538);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(18,0.02018163);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(19,0.01324201);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(20,0.01730532);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(21,0.02584182);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(22,0.01789264);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(23,0.01500682);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(24,0.01257862);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(25,0.01310044);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(26,0.009036145);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(27,0.01612903);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(28,0.01190476);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(29,0.01851852);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(30,0.01685393);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(32,0.01886792);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(33,0.02970297);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(34,0.015625);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(37,0.02325581);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(38,0.03448276);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(41,0.03846154);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(46,0.09090909);
   _QuadJet_DoubleTag_pt_jet2__28->SetBinContent(51,0.05714286);
   _QuadJet_DoubleTag_pt_jet2__28->SetEntries(0.6439345);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  260.9");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  124.6");
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
