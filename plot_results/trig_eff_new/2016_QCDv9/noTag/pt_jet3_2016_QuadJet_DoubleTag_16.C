#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_DoubleTag_16()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_DoubleTag_16/pt_jet3_2016_QuadJet_DoubleTag_16
//=========  (Mon Apr 24 10:39:15 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_QuadJet_DoubleTag_16 = new TCanvas("pt_jet3_2016_QuadJet_DoubleTag_16", "pt_jet3_2016_QuadJet_DoubleTag_16",0,0,600,600);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet3_2016_QuadJet_DoubleTag_16->Range(-109.1764,-0.01242604,585.8166,0.09112426);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetFillColor(0);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetFillStyle(4000);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetBorderMode(0);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetBorderSize(2);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetLeftMargin(0.15709);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetRightMargin(0.1234783);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetBottomMargin(0.12);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetFrameFillStyle(1000);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetFrameFillStyle(1000);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_pt_jet3__76 = new TH1D("_QuadJet_DoubleTag_pt_jet3__76","",50,0,500);
   _QuadJet_DoubleTag_pt_jet3__76->SetBinContent(5,0.007551747);
   _QuadJet_DoubleTag_pt_jet3__76->SetBinContent(6,0.01260262);
   _QuadJet_DoubleTag_pt_jet3__76->SetBinContent(7,0.01638795);
   _QuadJet_DoubleTag_pt_jet3__76->SetBinContent(8,0.01933531);
   _QuadJet_DoubleTag_pt_jet3__76->SetBinContent(9,0.0182829);
   _QuadJet_DoubleTag_pt_jet3__76->SetBinContent(10,0.01760126);
   _QuadJet_DoubleTag_pt_jet3__76->SetBinContent(11,0.01902772);
   _QuadJet_DoubleTag_pt_jet3__76->SetBinContent(12,0.01709402);
   _QuadJet_DoubleTag_pt_jet3__76->SetBinContent(13,0.02123328);
   _QuadJet_DoubleTag_pt_jet3__76->SetBinContent(14,0.02068345);
   _QuadJet_DoubleTag_pt_jet3__76->SetBinContent(15,0.02046577);
   _QuadJet_DoubleTag_pt_jet3__76->SetBinContent(16,0.01232033);
   _QuadJet_DoubleTag_pt_jet3__76->SetBinContent(17,0.02555911);
   _QuadJet_DoubleTag_pt_jet3__76->SetBinContent(18,0.02905569);
   _QuadJet_DoubleTag_pt_jet3__76->SetBinContent(19,0.015625);
   _QuadJet_DoubleTag_pt_jet3__76->SetBinContent(20,0.015625);
   _QuadJet_DoubleTag_pt_jet3__76->SetBinContent(21,0.01829268);
   _QuadJet_DoubleTag_pt_jet3__76->SetBinContent(22,0.04385965);
   _QuadJet_DoubleTag_pt_jet3__76->SetBinContent(23,0.01111111);
   _QuadJet_DoubleTag_pt_jet3__76->SetBinContent(24,0.03333333);
   _QuadJet_DoubleTag_pt_jet3__76->SetBinContent(27,0.07692308);
   _QuadJet_DoubleTag_pt_jet3__76->SetBinContent(28,0.04347826);
   _QuadJet_DoubleTag_pt_jet3__76->SetBinContent(29,0.03448276);
   _QuadJet_DoubleTag_pt_jet3__76->SetEntries(0.549932);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  185.4");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  72.44");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_pt_jet3__76->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_pt_jet3__76);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_DoubleTag_pt_jet3__76->SetLineColor(ci);
   _QuadJet_DoubleTag_pt_jet3__76->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_pt_jet3__76->GetXaxis()->SetRange(1,500);
   _QuadJet_DoubleTag_pt_jet3__76->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet3__76->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_pt_jet3__76->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet3__76->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_DoubleTag_pt_jet3__76->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet3__76->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet3__76->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet3__76->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_pt_jet3__76->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet3__76->Draw("HIST");
   pt_jet3_2016_QuadJet_DoubleTag_16->Modified();
   pt_jet3_2016_QuadJet_DoubleTag_16->cd();
   pt_jet3_2016_QuadJet_DoubleTag_16->SetSelected(pt_jet3_2016_QuadJet_DoubleTag_16);
}
