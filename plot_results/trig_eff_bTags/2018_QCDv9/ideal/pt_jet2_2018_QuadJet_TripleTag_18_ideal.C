#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2018_QuadJet_TripleTag_18_ideal()
{
//=========Macro generated from canvas: pt_jet2_2018_QuadJet_TripleTag_18_ideal/pt_jet2_2018_QuadJet_TripleTag_18_ideal
//=========  (Wed May  3 17:28:54 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2018_QuadJet_TripleTag_18_ideal = new TCanvas("pt_jet2_2018_QuadJet_TripleTag_18_ideal", "pt_jet2_2018_QuadJet_TripleTag_18_ideal",0,0,600,600);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetHighLightColor(2);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetFillColor(0);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetFillStyle(4000);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetBorderMode(0);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetBorderSize(2);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetLeftMargin(0.15709);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetRightMargin(0.1234783);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetBottomMargin(0.12);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetFrameFillStyle(1000);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetFrameFillStyle(1000);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet2__7 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet2__7","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetBinContent(5,0.6666667);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetBinContent(6,0.46);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetBinContent(7,0.5267857);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetBinContent(8,0.6086957);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetBinContent(9,0.7253521);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetBinContent(10,0.7873303);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetBinContent(11,0.8580645);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetBinContent(12,0.8230088);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetBinContent(13,0.8245614);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetBinContent(14,0.8644068);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetBinContent(15,0.9090909);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetBinContent(16,0.8367347);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetBinContent(17,0.8928571);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetBinContent(18,0.9230769);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetBinContent(19,0.7857143);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetBinContent(20,0.7777778);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetBinContent(21,0.7272727);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetBinContent(22,0.9);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetBinContent(23,0.7777778);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetBinContent(24,1);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetBinContent(25,1);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetBinContent(26,1);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetBinContent(28,0.625);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetBinContent(29,1);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetBinContent(32,1);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetBinContent(33,1);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetBinContent(35,1);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetBinContent(37,1);
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetEntries(23.30017);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 23     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  197.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  89.36");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet2__7->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet2__7);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_ideal_pt_jet2__7->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet2__7->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet2__7->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_ideal_pt_jet2__7->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__7->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2__7->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__7->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_ideal_pt_jet2__7->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__7->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__7->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__7->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2__7->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__7->Draw("HIST");
   
   TLegend *leg = new TLegend(0.5,0.7,0.9,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.025);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","HLT_PTHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->Modified();
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->cd();
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetSelected(pt_jet2_2018_QuadJet_TripleTag_18_ideal);
}
