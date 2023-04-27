#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_TripleTag_16_tagged_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_TripleTag_16_tagged/pt_jet3_2016_DoubleJet_TripleTag_16_tagged
//=========  (Thu Apr 27 10:18:38 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_TripleTag_16_tagged = new TCanvas("pt_jet3_2016_DoubleJet_TripleTag_16_tagged", "pt_jet3_2016_DoubleJet_TripleTag_16_tagged",0,0,600,600);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->Range(-100,-0.7782335,566.6667,3.993802);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetFillColor(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetLogy();
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetLeftMargin(0.15);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_tagged_pt_jet3__152 = new TH1D("_DoubleJet_TripleTag_tagged_pt_jet3__152","",50,0,500);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(5,771);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(6,1734);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(7,1695);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(8,1448);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(9,993);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(10,702);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(11,498);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(12,341);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(13,201);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(14,155);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(15,78);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(16,51);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(17,39);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(18,30);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(19,24);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(20,15);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(21,11);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(22,6);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(23,8);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(24,2);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(25,2);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(26,4);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(27,4);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(28,2);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(29,1);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(30,4);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(32,1);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(33,1);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetEntries(8821);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_tagged_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8821   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  77.95");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  28.04");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_tagged_pt_jet3__152->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_tagged_pt_jet3__152);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetLineColor(ci);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_tagged_pt_jet3__152->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_tagged_pt_jet3__152->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->Draw("HIST");
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->Modified();
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->cd();
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetSelected(pt_jet3_2016_DoubleJet_TripleTag_16_tagged);
}
