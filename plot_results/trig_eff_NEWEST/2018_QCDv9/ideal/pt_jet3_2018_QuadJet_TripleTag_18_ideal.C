#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_TripleTag_18_ideal()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_TripleTag_18_ideal/pt_jet3_2018_QuadJet_TripleTag_18_ideal
//=========  (Wed May  3 17:41:46 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_TripleTag_18_ideal = new TCanvas("pt_jet3_2018_QuadJet_TripleTag_18_ideal", "pt_jet3_2018_QuadJet_TripleTag_18_ideal",0,0,600,600);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetFillColor(0);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetFillStyle(4000);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetBorderSize(2);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetLeftMargin(0.15709);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetRightMargin(0.1234783);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetBottomMargin(0.12);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetFrameFillStyle(1000);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetFrameFillStyle(1000);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet3__10 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet3__10","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet3__10->SetBinContent(5,0.4556962);
   _QuadJet_TripleTag_ideal_pt_jet3__10->SetBinContent(6,0.5895197);
   _QuadJet_TripleTag_ideal_pt_jet3__10->SetBinContent(7,0.7052897);
   _QuadJet_TripleTag_ideal_pt_jet3__10->SetBinContent(8,0.7959184);
   _QuadJet_TripleTag_ideal_pt_jet3__10->SetBinContent(9,0.8152174);
   _QuadJet_TripleTag_ideal_pt_jet3__10->SetBinContent(10,0.8642857);
   _QuadJet_TripleTag_ideal_pt_jet3__10->SetBinContent(11,0.8791209);
   _QuadJet_TripleTag_ideal_pt_jet3__10->SetBinContent(12,0.8656716);
   _QuadJet_TripleTag_ideal_pt_jet3__10->SetBinContent(13,0.8372093);
   _QuadJet_TripleTag_ideal_pt_jet3__10->SetBinContent(14,0.84375);
   _QuadJet_TripleTag_ideal_pt_jet3__10->SetBinContent(15,0.8);
   _QuadJet_TripleTag_ideal_pt_jet3__10->SetBinContent(16,0.7857143);
   _QuadJet_TripleTag_ideal_pt_jet3__10->SetBinContent(17,0.9285714);
   _QuadJet_TripleTag_ideal_pt_jet3__10->SetBinContent(18,0.8);
   _QuadJet_TripleTag_ideal_pt_jet3__10->SetBinContent(19,1);
   _QuadJet_TripleTag_ideal_pt_jet3__10->SetBinContent(20,1);
   _QuadJet_TripleTag_ideal_pt_jet3__10->SetBinContent(21,0.8333333);
   _QuadJet_TripleTag_ideal_pt_jet3__10->SetBinContent(23,0.5);
   _QuadJet_TripleTag_ideal_pt_jet3__10->SetBinContent(24,1);
   _QuadJet_TripleTag_ideal_pt_jet3__10->SetBinContent(25,1);
   _QuadJet_TripleTag_ideal_pt_jet3__10->SetBinContent(29,1);
   _QuadJet_TripleTag_ideal_pt_jet3__10->SetEntries(17.2993);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 17     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  154.9");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  64.93");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet3__10->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet3__10);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_ideal_pt_jet3__10->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet3__10->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet3__10->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_ideal_pt_jet3__10->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__10->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3__10->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__10->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_ideal_pt_jet3__10->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__10->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__10->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__10->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3__10->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__10->Draw("HIST");
   
   TLegend *leg = new TLegend(-0.1,0.937775,0.8,1,NULL,"brNDC");
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
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->Modified();
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->cd();
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetSelected(pt_jet3_2018_QuadJet_TripleTag_18_ideal);
}
