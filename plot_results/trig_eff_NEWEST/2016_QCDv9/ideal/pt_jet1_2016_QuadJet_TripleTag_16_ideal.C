#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_QuadJet_TripleTag_16_ideal()
{
//=========Macro generated from canvas: pt_jet1_2016_QuadJet_TripleTag_16_ideal/pt_jet1_2016_QuadJet_TripleTag_16_ideal
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_QuadJet_TripleTag_16_ideal = new TCanvas("pt_jet1_2016_QuadJet_TripleTag_16_ideal", "pt_jet1_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetFillStyle(4000);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetLeftMargin(0.15709);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetRightMargin(0.1234783);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetBottomMargin(0.12);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet1__7 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet1__7","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(6,0.4);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(7,0.516129);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(8,0.6341463);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(9,0.7589286);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(10,0.7378641);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(11,0.7474747);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(12,0.8510638);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(13,0.8292683);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(14,0.86);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(15,0.893617);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(16,0.8958333);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(17,0.9259259);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(18,0.8275862);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(19,0.84);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(20,0.8285714);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(21,0.8888889);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(22,0.8076923);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(23,0.6666667);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(24,0.8888889);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(25,0.8461538);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(26,0.8333333);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(27,1);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(28,0.75);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(29,0.75);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(30,1);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(31,0.75);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(32,1);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(33,1);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(34,0.6666667);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(35,1);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(36,1);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(37,0.5);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(38,1);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(41,1);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(42,1);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(43,0.8);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(45,1);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetBinContent(51,0.4);
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetEntries(30.6947);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 31     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  247.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  108.5");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet1__7->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet1__7);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_ideal_pt_jet1__7->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet1__7->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet1__7->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_ideal_pt_jet1__7->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__7->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1__7->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__7->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_ideal_pt_jet1__7->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__7->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__7->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__7->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1__7->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__7->Draw("HIST");
   
   TLegend *leg = new TLegend(-0.1,0.937775,0.8,1,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.025);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","HLT_QuadJet45_TripleBTagCSV_p087","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->Modified();
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->cd();
   pt_jet1_2016_QuadJet_TripleTag_16_ideal->SetSelected(pt_jet1_2016_QuadJet_TripleTag_16_ideal);
}
