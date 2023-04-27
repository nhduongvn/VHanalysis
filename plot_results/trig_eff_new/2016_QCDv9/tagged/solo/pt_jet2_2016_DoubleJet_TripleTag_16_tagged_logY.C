#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_DoubleJet_TripleTag_16_tagged_logY()
{
//=========Macro generated from canvas: pt_jet2_2016_DoubleJet_TripleTag_16_tagged/pt_jet2_2016_DoubleJet_TripleTag_16_tagged
//=========  (Thu Apr 27 10:18:37 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_DoubleJet_TripleTag_16_tagged = new TCanvas("pt_jet2_2016_DoubleJet_TripleTag_16_tagged", "pt_jet2_2016_DoubleJet_TripleTag_16_tagged",0,0,600,600);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetHighLightColor(2);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->Range(-100,-0.7637113,566.6667,3.863101);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetFillColor(0);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetBorderMode(0);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetBorderSize(2);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetLogy();
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetLeftMargin(0.15);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_tagged_pt_jet2__140 = new TH1D("_DoubleJet_TripleTag_tagged_pt_jet2__140","",50,0,500);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(5,40);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(6,354);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(7,791);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(8,1121);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(9,1327);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(10,1164);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(11,983);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(12,747);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(13,540);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(14,439);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(15,315);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(16,234);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(17,180);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(18,120);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(19,94);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(20,80);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(21,61);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(22,48);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(23,45);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(24,20);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(25,18);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(26,13);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(27,14);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(28,13);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(29,12);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(30,5);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(31,8);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(32,9);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(33,5);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(34,4);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(35,4);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(36,4);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(37,2);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(39,1);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(41,1);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(42,1);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(43,1);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(44,1);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(45,1);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(46,1);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetEntries(8821);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_tagged_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8821   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  105.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   40.9");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_tagged_pt_jet2__140->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_tagged_pt_jet2__140);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetLineColor(ci);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_tagged_pt_jet2__140->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_tagged_pt_jet2__140->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->Draw("HIST");
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->Modified();
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->cd();
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetSelected(pt_jet2_2016_DoubleJet_TripleTag_16_tagged);
}
