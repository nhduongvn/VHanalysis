#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_QuadJet_TripleTag_16_ideal()
{
//=========Macro generated from canvas: pt_jet2_2016_QuadJet_TripleTag_16_ideal/pt_jet2_2016_QuadJet_TripleTag_16_ideal
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_QuadJet_TripleTag_16_ideal = new TCanvas("pt_jet2_2016_QuadJet_TripleTag_16_ideal", "pt_jet2_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetFillStyle(4000);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetLeftMargin(0.15709);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetRightMargin(0.1234783);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetBottomMargin(0.12);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet2__13 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet2__13","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(5,0.2941176);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(6,0.4554455);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(7,0.6964286);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(8,0.8060606);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(9,0.7928571);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(10,0.8857143);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(11,0.8762887);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(12,0.859375);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(13,0.796875);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(14,0.8181818);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(15,0.9090909);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(16,0.9259259);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(17,0.8235294);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(18,0.8333333);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(19,0.75);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(20,0.9);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(21,0.875);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(22,0.8333333);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(23,0.75);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(24,0.8);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(25,1);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(26,1);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(27,1);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(28,1);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(29,0.6666667);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(33,1);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(35,1);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetEntries(22.34822);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 22     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  187.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  80.53");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet2__13->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet2__13);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet2__13->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet2__13->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_ideal_pt_jet2__13->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__13->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2__13->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__13->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_ideal_pt_jet2__13->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__13->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__13->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__13->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2__13->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__13->Draw("HIST");
   
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
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->Modified();
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->cd();
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetSelected(pt_jet2_2016_QuadJet_TripleTag_16_ideal);
}
