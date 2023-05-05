#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_TripleTag_16_3B()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_TripleTag_16_3B/pt_jet3_2016_DoubleJet_TripleTag_16_3B
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_TripleTag_16_3B = new TCanvas("pt_jet3_2016_DoubleJet_TripleTag_16_3B", "pt_jet3_2016_DoubleJet_TripleTag_16_3B",0,0,600,600);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B->SetFillColor(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B->SetFillStyle(4000);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B->SetLeftMargin(0.15709);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B->SetRightMargin(0.1234783);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B->SetBottomMargin(0.12);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B->SetFrameFillStyle(1000);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B->SetFrameFillStyle(1000);
   pt_jet3_2016_DoubleJet_TripleTag_16_3B->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_3B_pt_jet3__76 = new TH1D("_DoubleJet_TripleTag_3B_pt_jet3__76","",50,0,500);
   _DoubleJet_TripleTag_3B_pt_jet3__76->SetBinContent(5,0.4874687);
   _DoubleJet_TripleTag_3B_pt_jet3__76->SetBinContent(6,0.5338398);
   _DoubleJet_TripleTag_3B_pt_jet3__76->SetBinContent(7,0.585482);
   _DoubleJet_TripleTag_3B_pt_jet3__76->SetBinContent(8,0.6202532);
   _DoubleJet_TripleTag_3B_pt_jet3__76->SetBinContent(9,0.669962);
   _DoubleJet_TripleTag_3B_pt_jet3__76->SetBinContent(10,0.6723301);
   _DoubleJet_TripleTag_3B_pt_jet3__76->SetBinContent(11,0.7097378);
   _DoubleJet_TripleTag_3B_pt_jet3__76->SetBinContent(12,0.7236467);
   _DoubleJet_TripleTag_3B_pt_jet3__76->SetBinContent(13,0.7067308);
   _DoubleJet_TripleTag_3B_pt_jet3__76->SetBinContent(14,0.7875);
   _DoubleJet_TripleTag_3B_pt_jet3__76->SetBinContent(15,0.7191011);
   _DoubleJet_TripleTag_3B_pt_jet3__76->SetBinContent(16,0.7285714);
   _DoubleJet_TripleTag_3B_pt_jet3__76->SetBinContent(17,0.8039216);
   _DoubleJet_TripleTag_3B_pt_jet3__76->SetBinContent(18,0.7878788);
   _DoubleJet_TripleTag_3B_pt_jet3__76->SetBinContent(19,0.8333333);
   _DoubleJet_TripleTag_3B_pt_jet3__76->SetBinContent(20,0.8333333);
   _DoubleJet_TripleTag_3B_pt_jet3__76->SetBinContent(21,0.5714286);
   _DoubleJet_TripleTag_3B_pt_jet3__76->SetBinContent(22,0.4545455);
   _DoubleJet_TripleTag_3B_pt_jet3__76->SetBinContent(23,1);
   _DoubleJet_TripleTag_3B_pt_jet3__76->SetBinContent(24,0.25);
   _DoubleJet_TripleTag_3B_pt_jet3__76->SetBinContent(25,0.5);
   _DoubleJet_TripleTag_3B_pt_jet3__76->SetBinContent(26,0.6666667);
   _DoubleJet_TripleTag_3B_pt_jet3__76->SetBinContent(27,0.8);
   _DoubleJet_TripleTag_3B_pt_jet3__76->SetBinContent(28,1);
   _DoubleJet_TripleTag_3B_pt_jet3__76->SetBinContent(29,0.5);
   _DoubleJet_TripleTag_3B_pt_jet3__76->SetBinContent(37,1);
   _DoubleJet_TripleTag_3B_pt_jet3__76->SetEntries(17.94573);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_3B_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 18     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  178.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  81.53");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_3B_pt_jet3__76->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_3B_pt_jet3__76);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_TripleTag_3B_pt_jet3__76->SetLineColor(ci);
   _DoubleJet_TripleTag_3B_pt_jet3__76->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_3B_pt_jet3__76->GetXaxis()->SetRange(1,500);
   _DoubleJet_TripleTag_3B_pt_jet3__76->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_pt_jet3__76->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_pt_jet3__76->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_pt_jet3__76->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_TripleTag_3B_pt_jet3__76->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_pt_jet3__76->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_pt_jet3__76->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_pt_jet3__76->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_pt_jet3__76->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_pt_jet3__76->Draw("HIST");
   
   TLegend *leg = new TLegend(-0.1,0.937775,0.8,1,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.025);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","HLT_DoubleJet90_Double30_TripleBTagCSV_p087","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   pt_jet3_2016_DoubleJet_TripleTag_16_3B->Modified();
   pt_jet3_2016_DoubleJet_TripleTag_16_3B->cd();
   pt_jet3_2016_DoubleJet_TripleTag_16_3B->SetSelected(pt_jet3_2016_DoubleJet_TripleTag_16_3B);
}
