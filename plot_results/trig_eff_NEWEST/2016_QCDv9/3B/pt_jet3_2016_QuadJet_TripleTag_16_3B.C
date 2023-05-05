#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_TripleTag_16_3B()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_TripleTag_16_3B/pt_jet3_2016_QuadJet_TripleTag_16_3B
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_QuadJet_TripleTag_16_3B = new TCanvas("pt_jet3_2016_QuadJet_TripleTag_16_3B", "pt_jet3_2016_QuadJet_TripleTag_16_3B",0,0,600,600);
   pt_jet3_2016_QuadJet_TripleTag_16_3B->SetHighLightColor(2);
   pt_jet3_2016_QuadJet_TripleTag_16_3B->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet3_2016_QuadJet_TripleTag_16_3B->SetFillColor(0);
   pt_jet3_2016_QuadJet_TripleTag_16_3B->SetFillStyle(4000);
   pt_jet3_2016_QuadJet_TripleTag_16_3B->SetBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16_3B->SetBorderSize(2);
   pt_jet3_2016_QuadJet_TripleTag_16_3B->SetLeftMargin(0.15709);
   pt_jet3_2016_QuadJet_TripleTag_16_3B->SetRightMargin(0.1234783);
   pt_jet3_2016_QuadJet_TripleTag_16_3B->SetBottomMargin(0.12);
   pt_jet3_2016_QuadJet_TripleTag_16_3B->SetFrameFillStyle(1000);
   pt_jet3_2016_QuadJet_TripleTag_16_3B->SetFrameBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16_3B->SetFrameFillStyle(1000);
   pt_jet3_2016_QuadJet_TripleTag_16_3B->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_3B_pt_jet3__73 = new TH1D("_QuadJet_TripleTag_3B_pt_jet3__73","",50,0,500);
   _QuadJet_TripleTag_3B_pt_jet3__73->SetBinContent(5,0.3061851);
   _QuadJet_TripleTag_3B_pt_jet3__73->SetBinContent(6,0.4861453);
   _QuadJet_TripleTag_3B_pt_jet3__73->SetBinContent(7,0.6271278);
   _QuadJet_TripleTag_3B_pt_jet3__73->SetBinContent(8,0.6637373);
   _QuadJet_TripleTag_3B_pt_jet3__73->SetBinContent(9,0.6940299);
   _QuadJet_TripleTag_3B_pt_jet3__73->SetBinContent(10,0.6771845);
   _QuadJet_TripleTag_3B_pt_jet3__73->SetBinContent(11,0.7016886);
   _QuadJet_TripleTag_3B_pt_jet3__73->SetBinContent(12,0.7236467);
   _QuadJet_TripleTag_3B_pt_jet3__73->SetBinContent(13,0.7019231);
   _QuadJet_TripleTag_3B_pt_jet3__73->SetBinContent(14,0.7848101);
   _QuadJet_TripleTag_3B_pt_jet3__73->SetBinContent(15,0.7272727);
   _QuadJet_TripleTag_3B_pt_jet3__73->SetBinContent(16,0.7285714);
   _QuadJet_TripleTag_3B_pt_jet3__73->SetBinContent(17,0.8039216);
   _QuadJet_TripleTag_3B_pt_jet3__73->SetBinContent(18,0.7878788);
   _QuadJet_TripleTag_3B_pt_jet3__73->SetBinContent(19,0.8333333);
   _QuadJet_TripleTag_3B_pt_jet3__73->SetBinContent(20,0.8333333);
   _QuadJet_TripleTag_3B_pt_jet3__73->SetBinContent(21,0.5714286);
   _QuadJet_TripleTag_3B_pt_jet3__73->SetBinContent(22,0.4545455);
   _QuadJet_TripleTag_3B_pt_jet3__73->SetBinContent(23,1);
   _QuadJet_TripleTag_3B_pt_jet3__73->SetBinContent(24,0.25);
   _QuadJet_TripleTag_3B_pt_jet3__73->SetBinContent(25,0.5);
   _QuadJet_TripleTag_3B_pt_jet3__73->SetBinContent(26,0.6666667);
   _QuadJet_TripleTag_3B_pt_jet3__73->SetBinContent(27,0.8);
   _QuadJet_TripleTag_3B_pt_jet3__73->SetBinContent(28,1);
   _QuadJet_TripleTag_3B_pt_jet3__73->SetBinContent(29,0.5);
   _QuadJet_TripleTag_3B_pt_jet3__73->SetBinContent(37,1);
   _QuadJet_TripleTag_3B_pt_jet3__73->SetEntries(17.82343);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_3B_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 18     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  179.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  80.85");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_3B_pt_jet3__73->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_3B_pt_jet3__73);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_3B_pt_jet3__73->SetLineColor(ci);
   _QuadJet_TripleTag_3B_pt_jet3__73->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_3B_pt_jet3__73->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_3B_pt_jet3__73->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet3__73->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_pt_jet3__73->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet3__73->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_3B_pt_jet3__73->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet3__73->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet3__73->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet3__73->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_pt_jet3__73->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet3__73->Draw("HIST");
   
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
   pt_jet3_2016_QuadJet_TripleTag_16_3B->Modified();
   pt_jet3_2016_QuadJet_TripleTag_16_3B->cd();
   pt_jet3_2016_QuadJet_TripleTag_16_3B->SetSelected(pt_jet3_2016_QuadJet_TripleTag_16_3B);
}
