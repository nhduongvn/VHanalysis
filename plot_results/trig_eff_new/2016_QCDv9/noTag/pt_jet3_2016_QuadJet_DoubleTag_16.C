#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_DoubleTag_16()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_DoubleTag_16/pt_jet3_2016_QuadJet_DoubleTag_16
//=========  (Thu Apr 27 10:18:36 2023) by ROOT version 6.26/06
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
   
   TH1D *_QuadJet_DoubleTag_pt_jet3__40 = new TH1D("_QuadJet_DoubleTag_pt_jet3__40","",50,0,500);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(5,0.007557651);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(6,0.01255448);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(7,0.0162583);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(8,0.01926503);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(9,0.01823103);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(10,0.01778773);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(11,0.01903919);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(12,0.01684506);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(13,0.02135752);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(14,0.02031603);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(15,0.02053824);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(16,0.01237113);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(17,0.02568218);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(18,0.02663438);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(19,0.01577287);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(20,0.01570681);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(21,0.01840491);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(22,0.04424779);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(23,0.01111111);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(24,0.03448276);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(27,0.07692308);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(28,0.04545455);
   _QuadJet_DoubleTag_pt_jet3__40->SetBinContent(29,0.03448276);
   _QuadJet_DoubleTag_pt_jet3__40->SetEntries(0.5510246);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =    186");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  72.55");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_pt_jet3__40->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_pt_jet3__40);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_DoubleTag_pt_jet3__40->SetLineColor(ci);
   _QuadJet_DoubleTag_pt_jet3__40->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_pt_jet3__40->GetXaxis()->SetRange(1,500);
   _QuadJet_DoubleTag_pt_jet3__40->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet3__40->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_pt_jet3__40->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet3__40->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_DoubleTag_pt_jet3__40->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet3__40->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet3__40->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet3__40->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_pt_jet3__40->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet3__40->Draw("HIST");
   pt_jet3_2016_QuadJet_DoubleTag_16->Modified();
   pt_jet3_2016_QuadJet_DoubleTag_16->cd();
   pt_jet3_2016_QuadJet_DoubleTag_16->SetSelected(pt_jet3_2016_QuadJet_DoubleTag_16);
}
