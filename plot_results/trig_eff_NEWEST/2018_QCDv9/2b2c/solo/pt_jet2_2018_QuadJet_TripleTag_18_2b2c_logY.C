#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2018_QuadJet_TripleTag_18_2b2c_logY()
{
//=========Macro generated from canvas: pt_jet2_2018_QuadJet_TripleTag_18_2b2c/pt_jet2_2018_QuadJet_TripleTag_18_2b2c
//=========  (Wed May  3 17:41:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2018_QuadJet_TripleTag_18_2b2c = new TCanvas("pt_jet2_2018_QuadJet_TripleTag_18_2b2c", "pt_jet2_2018_QuadJet_TripleTag_18_2b2c",0,0,600,600);
   pt_jet2_2018_QuadJet_TripleTag_18_2b2c->SetHighLightColor(2);
   pt_jet2_2018_QuadJet_TripleTag_18_2b2c->Range(-100,-0.7855451,566.6667,4.059606);
   pt_jet2_2018_QuadJet_TripleTag_18_2b2c->SetFillColor(0);
   pt_jet2_2018_QuadJet_TripleTag_18_2b2c->SetBorderMode(0);
   pt_jet2_2018_QuadJet_TripleTag_18_2b2c->SetBorderSize(2);
   pt_jet2_2018_QuadJet_TripleTag_18_2b2c->SetLogy();
   pt_jet2_2018_QuadJet_TripleTag_18_2b2c->SetLeftMargin(0.15);
   pt_jet2_2018_QuadJet_TripleTag_18_2b2c->SetFrameBorderMode(0);
   pt_jet2_2018_QuadJet_TripleTag_18_2b2c->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_2b2c_pt_jet2__62 = new TH1D("_QuadJet_TripleTag_2b2c_pt_jet2__62","",50,0,500);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(5,32);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(6,460);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(7,1350);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(8,1984);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(9,1960);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(10,1715);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(11,1410);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(12,1037);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(13,748);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(14,571);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(15,426);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(16,320);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(17,277);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(18,164);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(19,120);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(20,103);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(21,86);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(22,74);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(23,52);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(24,28);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(25,28);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(26,20);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(27,12);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(28,14);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(29,11);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(30,10);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(31,9);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(32,5);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(33,5);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(34,4);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(35,4);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(36,5);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(38,2);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(39,2);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(40,2);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(43,2);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(44,1);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(45,2);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(46,1);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetBinContent(50,1);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetEntries(13057);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_2b2c_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 13057  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  103.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  39.24");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_2b2c_pt_jet2__62->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_2b2c_pt_jet2__62);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_2b2c_pt_jet2__62->SetLineColor(ci);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_2b2c_pt_jet2__62->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_2b2c_pt_jet2__62->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet2__62->Draw("HIST");
   pt_jet2_2018_QuadJet_TripleTag_18_2b2c->Modified();
   pt_jet2_2018_QuadJet_TripleTag_18_2b2c->cd();
   pt_jet2_2018_QuadJet_TripleTag_18_2b2c->SetSelected(pt_jet2_2018_QuadJet_TripleTag_18_2b2c);
}
