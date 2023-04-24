#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_TripleTag_16()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_TripleTag_16/pt_jet3_2016_QuadJet_TripleTag_16
//=========  (Tue Apr 18 16:14:00 2023) by ROOT version 6.26/06
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
   
   TH1D *_QuadJet_TripleTag_pt_jet3__73 = new TH1D("_QuadJet_TripleTag_pt_jet3__73","",50,0,500);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(5,0.06428843);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(6,0.1126883);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(7,0.1581544);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(8,0.1841914);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(9,0.2037058);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(10,0.2094643);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(11,0.2287611);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(12,0.2334562);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(13,0.24041);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(14,0.2680272);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(15,0.2326241);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(16,0.24871);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(17,0.2676282);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(18,0.2912621);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(19,0.2421384);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(20,0.2146597);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(21,0.2208589);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(22,0.2719298);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(23,0.3483146);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(24,0.1724138);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(25,0.4);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(26,0.4);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(27,0.4615385);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(28,0.2608696);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(29,0.2068966);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(30,0.4285714);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(31,0.4285714);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(32,0.8);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(33,0.2857143);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(37,0.5);
   _QuadJet_TripleTag_pt_jet3__73->SetBinContent(38,0.5);
   _QuadJet_TripleTag_pt_jet3__73->SetEntries(9.085849);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 9      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  229.9");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  90.57");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_pt_jet3__73->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_pt_jet3__73);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_pt_jet3__73->SetLineColor(ci);
   _QuadJet_TripleTag_pt_jet3__73->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_pt_jet3__73->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_pt_jet3__73->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3__73->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet3__73->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3__73->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_pt_jet3__73->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3__73->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3__73->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3__73->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet3__73->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3__73->Draw("HIST");
   pt_jet3_2016_QuadJet_TripleTag_16->Modified();
   pt_jet3_2016_QuadJet_TripleTag_16->cd();
   pt_jet3_2016_QuadJet_TripleTag_16->SetSelected(pt_jet3_2016_QuadJet_TripleTag_16);
}
