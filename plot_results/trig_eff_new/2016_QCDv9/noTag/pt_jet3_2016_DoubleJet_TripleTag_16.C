#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_TripleTag_16()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_TripleTag_16/pt_jet3_2016_DoubleJet_TripleTag_16
//=========  (Thu Apr 27 10:18:36 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_TripleTag_16 = new TCanvas("pt_jet3_2016_DoubleJet_TripleTag_16", "pt_jet3_2016_DoubleJet_TripleTag_16",0,0,600,600);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_TripleTag_16->Range(-109.1764,-0.1292308,585.8166,0.9476923);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetFillColor(0);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetFillStyle(4000);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetLeftMargin(0.15709);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetRightMargin(0.1234783);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetBottomMargin(0.12);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetFrameFillStyle(1000);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetFrameFillStyle(1000);
   pt_jet3_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_pt_jet3__43 = new TH1D("_DoubleJet_TripleTag_pt_jet3__43","",50,0,500);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(5,0.0433104);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(6,0.06717469);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(7,0.1102363);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(8,0.1554874);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(9,0.195617);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(10,0.210027);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(11,0.2295772);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(12,0.2349535);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(13,0.2442949);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(14,0.269526);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(15,0.2322946);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(16,0.2484536);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(17,0.2696629);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(18,0.2905569);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(19,0.2397476);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(20,0.2198953);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(21,0.2208589);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(22,0.2743363);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(23,0.3444444);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(24,0.1896552);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(25,0.4);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(26,0.4);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(27,0.4615385);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(28,0.2727273);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(29,0.2068966);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(30,0.4285714);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(31,0.5);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(32,0.8);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(33,0.2857143);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(37,0.5);
   _DoubleJet_TripleTag_pt_jet3__43->SetBinContent(38,0.5);
   _DoubleJet_TripleTag_pt_jet3__43->SetEntries(9.045558);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 9      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  233.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   88.4");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_pt_jet3__43->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_pt_jet3__43);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_TripleTag_pt_jet3__43->SetLineColor(ci);
   _DoubleJet_TripleTag_pt_jet3__43->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_pt_jet3__43->GetXaxis()->SetRange(1,500);
   _DoubleJet_TripleTag_pt_jet3__43->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_pt_jet3__43->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_pt_jet3__43->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_pt_jet3__43->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_TripleTag_pt_jet3__43->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_pt_jet3__43->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_pt_jet3__43->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_pt_jet3__43->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_pt_jet3__43->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_pt_jet3__43->Draw("HIST");
   pt_jet3_2016_DoubleJet_TripleTag_16->Modified();
   pt_jet3_2016_DoubleJet_TripleTag_16->cd();
   pt_jet3_2016_DoubleJet_TripleTag_16->SetSelected(pt_jet3_2016_DoubleJet_TripleTag_16);
}
