#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_DoubleJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet2_2016_DoubleJet_TripleTag_16/pt_jet2_2016_DoubleJet_TripleTag_16
//=========  (Tue Apr 25 23:03:06 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_DoubleJet_TripleTag_16 = new TCanvas("pt_jet2_2016_DoubleJet_TripleTag_16", "pt_jet2_2016_DoubleJet_TripleTag_16",0,0,600,600);
   pt_jet2_2016_DoubleJet_TripleTag_16->SetHighLightColor(2);
   pt_jet2_2016_DoubleJet_TripleTag_16->Range(-100,-0.8601419,566.6667,4.730977);
   pt_jet2_2016_DoubleJet_TripleTag_16->SetFillColor(0);
   pt_jet2_2016_DoubleJet_TripleTag_16->SetBorderMode(0);
   pt_jet2_2016_DoubleJet_TripleTag_16->SetBorderSize(2);
   pt_jet2_2016_DoubleJet_TripleTag_16->SetLogy();
   pt_jet2_2016_DoubleJet_TripleTag_16->SetLeftMargin(0.15);
   pt_jet2_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   pt_jet2_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_pt_jet2__32 = new TH1D("_DoubleJet_TripleTag_pt_jet2__32","",50,0,500);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(5,387);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(6,3135);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(7,5496);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(8,7222);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(9,7840);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(10,7046);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(11,5351);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(12,3781);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(13,2754);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(14,2028);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(15,1483);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(16,1072);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(17,822);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(18,583);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(19,460);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(20,373);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(21,271);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(22,196);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(23,151);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(24,132);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(25,103);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(26,75);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(27,65);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(28,53);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(29,36);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(30,39);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(31,31);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(32,36);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(33,29);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(34,11);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(35,13);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(36,9);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(37,12);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(38,8);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(39,9);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(40,4);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(41,6);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(42,5);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(43,6);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(44,4);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(45,4);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(46,4);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(47,1);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(48,1);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(49,3);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(50,1);
   _DoubleJet_TripleTag_pt_jet2__32->SetBinContent(51,7);
   _DoubleJet_TripleTag_pt_jet2__32->SetEntries(51158);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 51158  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  100.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  39.16");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_pt_jet2__32->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_pt_jet2__32);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_pt_jet2__32->SetLineColor(ci);
   _DoubleJet_TripleTag_pt_jet2__32->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_pt_jet2__32->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_pt_jet2__32->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_pt_jet2__32->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_pt_jet2__32->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_pt_jet2__32->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_pt_jet2__32->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_pt_jet2__32->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_pt_jet2__32->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_pt_jet2__32->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_pt_jet2__32->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_pt_jet2__32->Draw("HIST");
   pt_jet2_2016_DoubleJet_TripleTag_16->Modified();
   pt_jet2_2016_DoubleJet_TripleTag_16->cd();
   pt_jet2_2016_DoubleJet_TripleTag_16->SetSelected(pt_jet2_2016_DoubleJet_TripleTag_16);
}
