#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_QuadJet_DoubleTag_16()
{
//=========Macro generated from canvas: pt_jet2_2016_QuadJet_DoubleTag_16/pt_jet2_2016_QuadJet_DoubleTag_16
//=========  (Mon Apr 24 10:39:15 2023) by ROOT version 6.26/06
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
   
   TH1D *_QuadJet_DoubleTag_pt_jet2__52 = new TH1D("_QuadJet_DoubleTag_pt_jet2__52","",50,0,500);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(5,0.003672168);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(6,0.008503594);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(7,0.0124165);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(8,0.01537043);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(9,0.01558339);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(10,0.0164712);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(11,0.01704336);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(12,0.01647896);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(13,0.01755248);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(14,0.01541807);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(15,0.01732502);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(16,0.01569916);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(17,0.01383996);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(18,0.02009377);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(19,0.01363017);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(20,0.01716738);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(21,0.02570093);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(22,0.01789264);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(23,0.01492537);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(24,0.0125);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(25,0.01298701);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(26,0.009063444);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(27,0.01612903);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(28,0.01587302);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(29,0.01834862);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(30,0.01685393);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(32,0.01886792);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(33,0.02970297);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(34,0.015625);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(37,0.02272727);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(38,0.03125);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(41,0.03846154);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(46,0.09090909);
   _QuadJet_DoubleTag_pt_jet2__52->SetBinContent(51,0.05714286);
   _QuadJet_DoubleTag_pt_jet2__52->SetEntries(0.6440834);
   
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
   ptstats_LaTex = ptstats->AddText("Std Dev   =  124.4");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_pt_jet2__52->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_pt_jet2__52);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_DoubleTag_pt_jet2__52->SetLineColor(ci);
   _QuadJet_DoubleTag_pt_jet2__52->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_pt_jet2__52->GetXaxis()->SetRange(1,500);
   _QuadJet_DoubleTag_pt_jet2__52->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet2__52->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_pt_jet2__52->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet2__52->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_DoubleTag_pt_jet2__52->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet2__52->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet2__52->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet2__52->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_pt_jet2__52->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet2__52->Draw("HIST");
   pt_jet2_2016_QuadJet_DoubleTag_16->Modified();
   pt_jet2_2016_QuadJet_DoubleTag_16->cd();
   pt_jet2_2016_QuadJet_DoubleTag_16->SetSelected(pt_jet2_2016_QuadJet_DoubleTag_16);
}
