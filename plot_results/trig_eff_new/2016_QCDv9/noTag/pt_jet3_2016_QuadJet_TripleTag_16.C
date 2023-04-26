#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_TripleTag_16()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_TripleTag_16/pt_jet3_2016_QuadJet_TripleTag_16
//=========  (Wed Apr 26 16:41:41 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_QuadJet_TripleTag_16 = new TCanvas("pt_jet3_2016_QuadJet_TripleTag_16", "pt_jet3_2016_QuadJet_TripleTag_16",0,0,600,600);
   pt_jet3_2016_QuadJet_TripleTag_16->SetHighLightColor(2);
   pt_jet3_2016_QuadJet_TripleTag_16->Range(-109.1764,-0.1292308,585.8166,0.9476923);
   pt_jet3_2016_QuadJet_TripleTag_16->SetFillColor(0);
   pt_jet3_2016_QuadJet_TripleTag_16->SetFillStyle(4000);
   pt_jet3_2016_QuadJet_TripleTag_16->SetBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16->SetBorderSize(2);
   pt_jet3_2016_QuadJet_TripleTag_16->SetLeftMargin(0.15709);
   pt_jet3_2016_QuadJet_TripleTag_16->SetRightMargin(0.1234783);
   pt_jet3_2016_QuadJet_TripleTag_16->SetBottomMargin(0.12);
   pt_jet3_2016_QuadJet_TripleTag_16->SetFrameFillStyle(1000);
   pt_jet3_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16->SetFrameFillStyle(1000);
   pt_jet3_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet3__37 = new TH1D("_QuadJet_TripleTag_pt_jet3__37","",50,0,500);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(5,0.06426301);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(6,0.1126614);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(7,0.1579876);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(8,0.184385);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(9,0.2027591);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(10,0.2101588);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(11,0.2279168);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(12,0.2331988);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(13,0.2425395);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(14,0.2677201);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(15,0.2322946);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(16,0.2474227);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(17,0.2696629);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(18,0.2905569);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(19,0.2397476);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(20,0.2198953);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(21,0.2208589);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(22,0.2743363);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(23,0.3444444);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(24,0.1896552);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(25,0.4);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(26,0.4);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(27,0.4615385);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(28,0.2727273);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(29,0.2068966);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(30,0.4285714);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(31,0.5);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(32,0.8);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(33,0.2857143);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(37,0.5);
   _QuadJet_TripleTag_pt_jet3__37->SetBinContent(38,0.5);
   _QuadJet_TripleTag_pt_jet3__37->SetEntries(9.187913);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 9      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  230.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  90.32");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_pt_jet3__37->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_pt_jet3__37);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_pt_jet3__37->SetLineColor(ci);
   _QuadJet_TripleTag_pt_jet3__37->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_pt_jet3__37->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_pt_jet3__37->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3__37->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet3__37->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3__37->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_pt_jet3__37->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3__37->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3__37->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3__37->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet3__37->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3__37->Draw("HIST");
   pt_jet3_2016_QuadJet_TripleTag_16->Modified();
   pt_jet3_2016_QuadJet_TripleTag_16->cd();
   pt_jet3_2016_QuadJet_TripleTag_16->SetSelected(pt_jet3_2016_QuadJet_TripleTag_16);
}
