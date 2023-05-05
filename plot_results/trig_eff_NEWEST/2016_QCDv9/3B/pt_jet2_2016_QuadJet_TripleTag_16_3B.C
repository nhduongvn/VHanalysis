#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_QuadJet_TripleTag_16_3B()
{
//=========Macro generated from canvas: pt_jet2_2016_QuadJet_TripleTag_16_3B/pt_jet2_2016_QuadJet_TripleTag_16_3B
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_QuadJet_TripleTag_16_3B = new TCanvas("pt_jet2_2016_QuadJet_TripleTag_16_3B", "pt_jet2_2016_QuadJet_TripleTag_16_3B",0,0,600,600);
   pt_jet2_2016_QuadJet_TripleTag_16_3B->SetHighLightColor(2);
   pt_jet2_2016_QuadJet_TripleTag_16_3B->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet2_2016_QuadJet_TripleTag_16_3B->SetFillColor(0);
   pt_jet2_2016_QuadJet_TripleTag_16_3B->SetFillStyle(4000);
   pt_jet2_2016_QuadJet_TripleTag_16_3B->SetBorderMode(0);
   pt_jet2_2016_QuadJet_TripleTag_16_3B->SetBorderSize(2);
   pt_jet2_2016_QuadJet_TripleTag_16_3B->SetLeftMargin(0.15709);
   pt_jet2_2016_QuadJet_TripleTag_16_3B->SetRightMargin(0.1234783);
   pt_jet2_2016_QuadJet_TripleTag_16_3B->SetBottomMargin(0.12);
   pt_jet2_2016_QuadJet_TripleTag_16_3B->SetFrameFillStyle(1000);
   pt_jet2_2016_QuadJet_TripleTag_16_3B->SetFrameBorderMode(0);
   pt_jet2_2016_QuadJet_TripleTag_16_3B->SetFrameFillStyle(1000);
   pt_jet2_2016_QuadJet_TripleTag_16_3B->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_3B_pt_jet2__67 = new TH1D("_QuadJet_TripleTag_3B_pt_jet2__67","",50,0,500);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(5,0.1690363);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(6,0.3298724);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(7,0.4895696);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(8,0.5586294);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(9,0.6220833);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(10,0.637941);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(11,0.6243137);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(12,0.6557018);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(13,0.6401734);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(14,0.6919643);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(15,0.6808511);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(16,0.6266667);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(17,0.7311321);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(18,0.7218045);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(19,0.7583333);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(20,0.7555556);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(21,0.75);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(22,0.7924528);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(23,0.6857143);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(24,0.6451613);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(25,0.68);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(26,0.6428571);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(27,0.5833333);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(28,0.7);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(29,0.5555556);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(30,0.3333333);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(31,0.9);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(32,0.7142857);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(33,0.8888889);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(35,0.6);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(38,0.5);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(40,1);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(41,0.3333333);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(42,1);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(43,0.6666667);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetBinContent(45,1);
   _QuadJet_TripleTag_3B_pt_jet2__67->SetEntries(23.66521);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_3B_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 24     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  239.9");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  112.5");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_3B_pt_jet2__67->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_3B_pt_jet2__67);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_3B_pt_jet2__67->SetLineColor(ci);
   _QuadJet_TripleTag_3B_pt_jet2__67->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_3B_pt_jet2__67->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_3B_pt_jet2__67->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet2__67->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_pt_jet2__67->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet2__67->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_3B_pt_jet2__67->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet2__67->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet2__67->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet2__67->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_pt_jet2__67->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet2__67->Draw("HIST");
   
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
   pt_jet2_2016_QuadJet_TripleTag_16_3B->Modified();
   pt_jet2_2016_QuadJet_TripleTag_16_3B->cd();
   pt_jet2_2016_QuadJet_TripleTag_16_3B->SetSelected(pt_jet2_2016_QuadJet_TripleTag_16_3B);
}
