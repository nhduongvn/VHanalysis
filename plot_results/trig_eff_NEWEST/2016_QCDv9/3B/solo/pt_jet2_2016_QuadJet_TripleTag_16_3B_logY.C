#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_QuadJet_TripleTag_16_3B_logY()
{
//=========Macro generated from canvas: pt_jet2_2016_QuadJet_TripleTag_16_3B/pt_jet2_2016_QuadJet_TripleTag_16_3B
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_QuadJet_TripleTag_16_3B = new TCanvas("pt_jet2_2016_QuadJet_TripleTag_16_3B", "pt_jet2_2016_QuadJet_TripleTag_16_3B",0,0,600,600);
   pt_jet2_2016_QuadJet_TripleTag_16_3B->SetHighLightColor(2);
   pt_jet2_2016_QuadJet_TripleTag_16_3B->Range(-100,-0.7818661,566.6667,4.026495);
   pt_jet2_2016_QuadJet_TripleTag_16_3B->SetFillColor(0);
   pt_jet2_2016_QuadJet_TripleTag_16_3B->SetBorderMode(0);
   pt_jet2_2016_QuadJet_TripleTag_16_3B->SetBorderSize(2);
   pt_jet2_2016_QuadJet_TripleTag_16_3B->SetLogy();
   pt_jet2_2016_QuadJet_TripleTag_16_3B->SetLeftMargin(0.15);
   pt_jet2_2016_QuadJet_TripleTag_16_3B->SetFrameBorderMode(0);
   pt_jet2_2016_QuadJet_TripleTag_16_3B->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_3B_pt_jet2__68 = new TH1D("_QuadJet_TripleTag_3B_pt_jet2__68","",50,0,500);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(5,107);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(6,1112);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(7,1854);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(8,1777);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(9,1493);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(10,1103);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(11,796);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(12,598);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(13,443);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(14,310);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(15,224);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(16,188);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(17,155);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(18,96);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(19,91);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(20,68);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(21,48);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(22,42);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(23,24);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(24,20);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(25,17);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(26,9);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(27,7);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(28,7);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(29,5);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(30,2);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(31,9);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(32,5);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(33,8);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(35,3);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(38,1);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(40,1);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(41,1);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(42,1);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(43,2);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetBinContent(45,2);
   _QuadJet_TripleTag_3B_pt_jet2__68->SetEntries(10629);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_3B_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 10629  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  92.84");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  37.65");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_3B_pt_jet2__68->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_3B_pt_jet2__68);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_3B_pt_jet2__68->SetLineColor(ci);
   _QuadJet_TripleTag_3B_pt_jet2__68->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_3B_pt_jet2__68->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_3B_pt_jet2__68->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet2__68->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_pt_jet2__68->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet2__68->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_3B_pt_jet2__68->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet2__68->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet2__68->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet2__68->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_pt_jet2__68->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet2__68->Draw("HIST");
   pt_jet2_2016_QuadJet_TripleTag_16_3B->Modified();
   pt_jet2_2016_QuadJet_TripleTag_16_3B->cd();
   pt_jet2_2016_QuadJet_TripleTag_16_3B->SetSelected(pt_jet2_2016_QuadJet_TripleTag_16_3B);
}
