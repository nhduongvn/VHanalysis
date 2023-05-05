#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_TripleTag_16_2b2c()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_TripleTag_16_2b2c/pt_jet3_2016_DoubleJet_TripleTag_16_2b2c
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_TripleTag_16_2b2c = new TCanvas("pt_jet3_2016_DoubleJet_TripleTag_16_2b2c", "pt_jet3_2016_DoubleJet_TripleTag_16_2b2c",0,0,600,600);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c->SetFillColor(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c->SetFillStyle(4000);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c->SetLeftMargin(0.15709);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c->SetRightMargin(0.1234783);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c->SetBottomMargin(0.12);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c->SetFrameFillStyle(1000);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c->SetFrameFillStyle(1000);
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_2b2c_pt_jet3__130 = new TH1D("_DoubleJet_TripleTag_2b2c_pt_jet3__130","",50,0,500);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetBinContent(5,0.344796);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetBinContent(6,0.3859884);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetBinContent(7,0.4133142);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetBinContent(8,0.4560171);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetBinContent(9,0.4878269);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetBinContent(10,0.5162359);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetBinContent(11,0.543235);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetBinContent(12,0.5698758);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetBinContent(13,0.5691906);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetBinContent(14,0.6148148);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetBinContent(15,0.5120482);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetBinContent(16,0.5192308);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetBinContent(17,0.5);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetBinContent(18,0.5666667);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetBinContent(19,0.5555556);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetBinContent(20,0.68);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetBinContent(21,0.4782609);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetBinContent(22,0.4285714);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetBinContent(23,0.6666667);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetBinContent(24,0.4);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetBinContent(25,0.5);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetBinContent(26,0.5714286);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetBinContent(27,0.7142857);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetBinContent(28,0.5);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetBinContent(29,0.5);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetBinContent(30,0.8);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetBinContent(32,1);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetBinContent(33,1);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetEntries(15.79401);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_2b2c_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 16     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  195.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   83.7");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_2b2c_pt_jet3__130);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->SetLineColor(ci);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->GetXaxis()->SetRange(1,500);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_pt_jet3__130->Draw("HIST");
   
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
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c->Modified();
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c->cd();
   pt_jet3_2016_DoubleJet_TripleTag_16_2b2c->SetSelected(pt_jet3_2016_DoubleJet_TripleTag_16_2b2c);
}
