#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_DoubleJet_TripleTag_16_tagged_logY()
{
//=========Macro generated from canvas: pt_jet1_2016_DoubleJet_TripleTag_16_tagged/pt_jet1_2016_DoubleJet_TripleTag_16_tagged
//=========  (Thu Apr 27 10:19:45 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_DoubleJet_TripleTag_16_tagged = new TCanvas("pt_jet1_2016_DoubleJet_TripleTag_16_tagged", "pt_jet1_2016_DoubleJet_TripleTag_16_tagged",0,0,600,600);
   pt_jet1_2016_DoubleJet_TripleTag_16_tagged->SetHighLightColor(2);
   pt_jet1_2016_DoubleJet_TripleTag_16_tagged->Range(-100,-0.6016117,566.6667,2.404205);
   pt_jet1_2016_DoubleJet_TripleTag_16_tagged->SetFillColor(0);
   pt_jet1_2016_DoubleJet_TripleTag_16_tagged->SetBorderMode(0);
   pt_jet1_2016_DoubleJet_TripleTag_16_tagged->SetBorderSize(2);
   pt_jet1_2016_DoubleJet_TripleTag_16_tagged->SetLogy();
   pt_jet1_2016_DoubleJet_TripleTag_16_tagged->SetLeftMargin(0.15);
   pt_jet1_2016_DoubleJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet1_2016_DoubleJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_tagged_pt_jet1__128 = new TH1D("_DoubleJet_TripleTag_tagged_pt_jet1__128","",50,0,500);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(6,1);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(7,2);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(8,1);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(9,28);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(10,52);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(11,62);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(12,67);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(13,63);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(14,45);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(15,40);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(16,42);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(17,23);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(18,24);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(19,20);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(20,30);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(21,24);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(22,21);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(23,15);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(24,8);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(25,9);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(26,9);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(27,6);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(28,5);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(29,6);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(30,6);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(31,3);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(32,3);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(33,1);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(34,2);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(35,2);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(36,1);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(37,1);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(38,2);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(41,1);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(42,1);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(43,4);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(45,2);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetBinContent(51,2);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetEntries(634);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_tagged_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 634    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  157.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  64.61");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_tagged_pt_jet1__128->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_tagged_pt_jet1__128);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_tagged_pt_jet1__128->SetLineColor(ci);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_tagged_pt_jet1__128->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_tagged_pt_jet1__128->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet1__128->Draw("HIST");
   pt_jet1_2016_DoubleJet_TripleTag_16_tagged->Modified();
   pt_jet1_2016_DoubleJet_TripleTag_16_tagged->cd();
   pt_jet1_2016_DoubleJet_TripleTag_16_tagged->SetSelected(pt_jet1_2016_DoubleJet_TripleTag_16_tagged);
}
