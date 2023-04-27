#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_QuadJet_TripleTag_16_tagged_logY()
{
//=========Macro generated from canvas: pt_jet0_2016_QuadJet_TripleTag_16_tagged/pt_jet0_2016_QuadJet_TripleTag_16_tagged
//=========  (Thu Apr 27 10:18:37 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_QuadJet_TripleTag_16_tagged = new TCanvas("pt_jet0_2016_QuadJet_TripleTag_16_tagged", "pt_jet0_2016_QuadJet_TripleTag_16_tagged",0,0,600,600);
   pt_jet0_2016_QuadJet_TripleTag_16_tagged->SetHighLightColor(2);
   pt_jet0_2016_QuadJet_TripleTag_16_tagged->Range(-100,0.6244185,566.6667,3.411133);
   pt_jet0_2016_QuadJet_TripleTag_16_tagged->SetFillColor(0);
   pt_jet0_2016_QuadJet_TripleTag_16_tagged->SetBorderMode(0);
   pt_jet0_2016_QuadJet_TripleTag_16_tagged->SetBorderSize(2);
   pt_jet0_2016_QuadJet_TripleTag_16_tagged->SetLogy();
   pt_jet0_2016_QuadJet_TripleTag_16_tagged->SetLeftMargin(0.15);
   pt_jet0_2016_QuadJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet0_2016_QuadJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet0__110 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet0__110","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(6,16);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(7,102);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(8,251);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(9,476);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(10,579);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(11,690);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(12,686);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(13,716);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(14,686);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(15,651);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(16,642);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(17,542);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(18,543);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(19,484);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(20,364);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(21,385);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(22,349);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(23,310);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(24,274);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(25,222);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(26,207);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(27,185);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(28,224);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(29,155);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(30,147);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(31,129);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(32,120);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(33,87);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(34,108);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(35,90);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(36,87);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(37,68);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(38,66);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(39,51);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(40,51);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(41,42);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(42,51);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(43,56);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(44,45);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(45,43);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(46,36);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(47,33);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(48,26);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(49,25);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(50,25);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetBinContent(51,313);
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetEntries(11438);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_tagged_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 11438  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  184.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  87.55");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet0__110->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet0__110);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_pt_jet0__110->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet0__110->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet0__110->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_tagged_pt_jet0__110->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__110->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet0__110->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__110->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_pt_jet0__110->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__110->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__110->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__110->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet0__110->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__110->Draw("HIST");
   pt_jet0_2016_QuadJet_TripleTag_16_tagged->Modified();
   pt_jet0_2016_QuadJet_TripleTag_16_tagged->cd();
   pt_jet0_2016_QuadJet_TripleTag_16_tagged->SetSelected(pt_jet0_2016_QuadJet_TripleTag_16_tagged);
}
