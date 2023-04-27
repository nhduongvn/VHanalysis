#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_TripleTag_18_tagged_logY()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_TripleTag_18_tagged/pt_jet0_2018_QuadJet_TripleTag_18_tagged
//=========  (Thu Apr 27 10:20:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2018_QuadJet_TripleTag_18_tagged = new TCanvas("pt_jet0_2018_QuadJet_TripleTag_18_tagged", "pt_jet0_2018_QuadJet_TripleTag_18_tagged",0,0,600,600);
   pt_jet0_2018_QuadJet_TripleTag_18_tagged->SetHighLightColor(2);
   pt_jet0_2018_QuadJet_TripleTag_18_tagged->Range(-100,-0.6125791,566.6667,2.502912);
   pt_jet0_2018_QuadJet_TripleTag_18_tagged->SetFillColor(0);
   pt_jet0_2018_QuadJet_TripleTag_18_tagged->SetBorderMode(0);
   pt_jet0_2018_QuadJet_TripleTag_18_tagged->SetBorderSize(2);
   pt_jet0_2018_QuadJet_TripleTag_18_tagged->SetLogy();
   pt_jet0_2018_QuadJet_TripleTag_18_tagged->SetLeftMargin(0.15);
   pt_jet0_2018_QuadJet_TripleTag_18_tagged->SetFrameBorderMode(0);
   pt_jet0_2018_QuadJet_TripleTag_18_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet0__56 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet0__56","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(9,11);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(10,17);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(11,35);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(12,77);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(13,69);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(14,79);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(15,82);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(16,72);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(17,78);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(18,72);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(19,65);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(20,66);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(21,54);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(22,60);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(23,50);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(24,47);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(25,34);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(26,24);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(27,41);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(28,33);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(29,27);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(30,18);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(31,22);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(32,24);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(33,14);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(34,18);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(35,11);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(36,10);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(37,9);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(38,4);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(39,11);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(40,13);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(41,10);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(42,9);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(43,4);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(44,8);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(45,7);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(46,2);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(47,4);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(48,4);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(49,3);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(50,1);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(51,38);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetEntries(1337);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_tagged_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1337   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  208.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   83.7");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet0__56);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__56->Draw("HIST");
   pt_jet0_2018_QuadJet_TripleTag_18_tagged->Modified();
   pt_jet0_2018_QuadJet_TripleTag_18_tagged->cd();
   pt_jet0_2018_QuadJet_TripleTag_18_tagged->SetSelected(pt_jet0_2018_QuadJet_TripleTag_18_tagged);
}
