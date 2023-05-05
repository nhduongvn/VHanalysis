#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_TripleTag_16_ideal()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_TripleTag_16_ideal/pt_jet3_2016_QuadJet_TripleTag_16_ideal
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_QuadJet_TripleTag_16_ideal = new TCanvas("pt_jet3_2016_QuadJet_TripleTag_16_ideal", "pt_jet3_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetFillStyle(4000);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetLeftMargin(0.15709);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetRightMargin(0.1234783);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetBottomMargin(0.12);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet3__19 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet3__19","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet3__19->SetBinContent(5,0.4365079);
   _QuadJet_TripleTag_ideal_pt_jet3__19->SetBinContent(6,0.6917293);
   _QuadJet_TripleTag_ideal_pt_jet3__19->SetBinContent(7,0.8489796);
   _QuadJet_TripleTag_ideal_pt_jet3__19->SetBinContent(8,0.8888889);
   _QuadJet_TripleTag_ideal_pt_jet3__19->SetBinContent(9,0.877551);
   _QuadJet_TripleTag_ideal_pt_jet3__19->SetBinContent(10,0.8507463);
   _QuadJet_TripleTag_ideal_pt_jet3__19->SetBinContent(11,0.8181818);
   _QuadJet_TripleTag_ideal_pt_jet3__19->SetBinContent(12,0.9166667);
   _QuadJet_TripleTag_ideal_pt_jet3__19->SetBinContent(13,0.7619048);
   _QuadJet_TripleTag_ideal_pt_jet3__19->SetBinContent(14,1);
   _QuadJet_TripleTag_ideal_pt_jet3__19->SetBinContent(15,0.8);
   _QuadJet_TripleTag_ideal_pt_jet3__19->SetBinContent(16,0.8571429);
   _QuadJet_TripleTag_ideal_pt_jet3__19->SetBinContent(17,1);
   _QuadJet_TripleTag_ideal_pt_jet3__19->SetBinContent(18,1);
   _QuadJet_TripleTag_ideal_pt_jet3__19->SetBinContent(19,1);
   _QuadJet_TripleTag_ideal_pt_jet3__19->SetBinContent(20,1);
   _QuadJet_TripleTag_ideal_pt_jet3__19->SetBinContent(24,1);
   _QuadJet_TripleTag_ideal_pt_jet3__19->SetBinContent(26,1);
   _QuadJet_TripleTag_ideal_pt_jet3__19->SetBinContent(27,1);
   _QuadJet_TripleTag_ideal_pt_jet3__19->SetEntries(16.7483);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 17     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  148.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  63.49");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet3__19->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet3__19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_ideal_pt_jet3__19->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet3__19->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet3__19->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_ideal_pt_jet3__19->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__19->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3__19->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__19->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_ideal_pt_jet3__19->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__19->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__19->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__19->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3__19->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__19->Draw("HIST");
   
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
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->Modified();
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->cd();
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetSelected(pt_jet3_2016_QuadJet_TripleTag_16_ideal);
}
