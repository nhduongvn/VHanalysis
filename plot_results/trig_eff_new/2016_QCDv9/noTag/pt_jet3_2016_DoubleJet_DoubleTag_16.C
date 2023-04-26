#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_DoubleTag_16()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_DoubleTag_16/pt_jet3_2016_DoubleJet_DoubleTag_16
//=========  (Tue Apr 25 23:03:06 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_DoubleTag_16 = new TCanvas("pt_jet3_2016_DoubleJet_DoubleTag_16", "pt_jet3_2016_DoubleJet_DoubleTag_16",0,0,600,600);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_DoubleTag_16->Range(-109.1764,-0.02307692,585.8166,0.1692308);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetFillColor(0);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetFillStyle(4000);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetLeftMargin(0.15709);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetRightMargin(0.1234783);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetBottomMargin(0.12);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetFrameFillStyle(1000);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetFrameFillStyle(1000);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_pt_jet3__46 = new TH1D("_DoubleJet_DoubleTag_pt_jet3__46","",50,0,500);
   _DoubleJet_DoubleTag_pt_jet3__46->SetBinContent(5,0.003938908);
   _DoubleJet_DoubleTag_pt_jet3__46->SetBinContent(6,0.005694314);
   _DoubleJet_DoubleTag_pt_jet3__46->SetBinContent(7,0.009508253);
   _DoubleJet_DoubleTag_pt_jet3__46->SetBinContent(8,0.01165472);
   _DoubleJet_DoubleTag_pt_jet3__46->SetBinContent(9,0.01429051);
   _DoubleJet_DoubleTag_pt_jet3__46->SetBinContent(10,0.01419878);
   _DoubleJet_DoubleTag_pt_jet3__46->SetBinContent(11,0.01495821);
   _DoubleJet_DoubleTag_pt_jet3__46->SetBinContent(12,0.01447759);
   _DoubleJet_DoubleTag_pt_jet3__46->SetBinContent(13,0.0104712);
   _DoubleJet_DoubleTag_pt_jet3__46->SetBinContent(14,0.01663669);
   _DoubleJet_DoubleTag_pt_jet3__46->SetBinContent(15,0.01905434);
   _DoubleJet_DoubleTag_pt_jet3__46->SetBinContent(16,0.0174538);
   _DoubleJet_DoubleTag_pt_jet3__46->SetBinContent(17,0.01597444);
   _DoubleJet_DoubleTag_pt_jet3__46->SetBinContent(18,0.02905569);
   _DoubleJet_DoubleTag_pt_jet3__46->SetBinContent(19,0.025);
   _DoubleJet_DoubleTag_pt_jet3__46->SetBinContent(20,0.015625);
   _DoubleJet_DoubleTag_pt_jet3__46->SetBinContent(21,0.006097561);
   _DoubleJet_DoubleTag_pt_jet3__46->SetBinContent(22,0.02631579);
   _DoubleJet_DoubleTag_pt_jet3__46->SetBinContent(23,0.01111111);
   _DoubleJet_DoubleTag_pt_jet3__46->SetBinContent(24,0.01666667);
   _DoubleJet_DoubleTag_pt_jet3__46->SetBinContent(26,0.03333333);
   _DoubleJet_DoubleTag_pt_jet3__46->SetBinContent(27,0.03846154);
   _DoubleJet_DoubleTag_pt_jet3__46->SetBinContent(28,0.08695652);
   _DoubleJet_DoubleTag_pt_jet3__46->SetBinContent(29,0.137931);
   _DoubleJet_DoubleTag_pt_jet3__46->SetBinContent(30,0.1428571);
   _DoubleJet_DoubleTag_pt_jet3__46->SetEntries(0.7377231);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  229.9");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  72.09");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_pt_jet3__46->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_pt_jet3__46);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_pt_jet3__46->SetLineColor(ci);
   _DoubleJet_DoubleTag_pt_jet3__46->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_pt_jet3__46->GetXaxis()->SetRange(1,500);
   _DoubleJet_DoubleTag_pt_jet3__46->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_pt_jet3__46->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_pt_jet3__46->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_pt_jet3__46->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_pt_jet3__46->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_pt_jet3__46->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_pt_jet3__46->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_pt_jet3__46->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_pt_jet3__46->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_pt_jet3__46->Draw("HIST");
   pt_jet3_2016_DoubleJet_DoubleTag_16->Modified();
   pt_jet3_2016_DoubleJet_DoubleTag_16->cd();
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetSelected(pt_jet3_2016_DoubleJet_DoubleTag_16);
}
