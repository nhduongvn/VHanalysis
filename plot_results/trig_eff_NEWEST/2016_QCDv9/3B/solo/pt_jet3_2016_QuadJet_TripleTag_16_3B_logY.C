#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_TripleTag_16_3B_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_TripleTag_16_3B/pt_jet3_2016_QuadJet_TripleTag_16_3B
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_QuadJet_TripleTag_16_3B = new TCanvas("pt_jet3_2016_QuadJet_TripleTag_16_3B", "pt_jet3_2016_QuadJet_TripleTag_16_3B",0,0,600,600);
   pt_jet3_2016_QuadJet_TripleTag_16_3B->SetHighLightColor(2);
   pt_jet3_2016_QuadJet_TripleTag_16_3B->Range(-100,-0.8073555,566.6667,4.255899);
   pt_jet3_2016_QuadJet_TripleTag_16_3B->SetFillColor(0);
   pt_jet3_2016_QuadJet_TripleTag_16_3B->SetBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16_3B->SetBorderSize(2);
   pt_jet3_2016_QuadJet_TripleTag_16_3B->SetLogy();
   pt_jet3_2016_QuadJet_TripleTag_16_3B->SetLeftMargin(0.15);
   pt_jet3_2016_QuadJet_TripleTag_16_3B->SetFrameBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16_3B->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_3B_pt_jet3__74 = new TH1D("_QuadJet_TripleTag_3B_pt_jet3__74","",50,0,500);
   _QuadJet_TripleTag_3B_pt_jet3__74->SetBinContent(5,1297);
   _QuadJet_TripleTag_3B_pt_jet3__74->SetBinContent(6,2965);
   _QuadJet_TripleTag_3B_pt_jet3__74->SetBinContent(7,2321);
   _QuadJet_TripleTag_3B_pt_jet3__74->SetBinContent(8,1435);
   _QuadJet_TripleTag_3B_pt_jet3__74->SetBinContent(9,930);
   _QuadJet_TripleTag_3B_pt_jet3__74->SetBinContent(10,558);
   _QuadJet_TripleTag_3B_pt_jet3__74->SetBinContent(11,374);
   _QuadJet_TripleTag_3B_pt_jet3__74->SetBinContent(12,254);
   _QuadJet_TripleTag_3B_pt_jet3__74->SetBinContent(13,146);
   _QuadJet_TripleTag_3B_pt_jet3__74->SetBinContent(14,124);
   _QuadJet_TripleTag_3B_pt_jet3__74->SetBinContent(15,64);
   _QuadJet_TripleTag_3B_pt_jet3__74->SetBinContent(16,51);
   _QuadJet_TripleTag_3B_pt_jet3__74->SetBinContent(17,41);
   _QuadJet_TripleTag_3B_pt_jet3__74->SetBinContent(18,26);
   _QuadJet_TripleTag_3B_pt_jet3__74->SetBinContent(19,10);
   _QuadJet_TripleTag_3B_pt_jet3__74->SetBinContent(20,10);
   _QuadJet_TripleTag_3B_pt_jet3__74->SetBinContent(21,4);
   _QuadJet_TripleTag_3B_pt_jet3__74->SetBinContent(22,5);
   _QuadJet_TripleTag_3B_pt_jet3__74->SetBinContent(23,3);
   _QuadJet_TripleTag_3B_pt_jet3__74->SetBinContent(24,1);
   _QuadJet_TripleTag_3B_pt_jet3__74->SetBinContent(25,1);
   _QuadJet_TripleTag_3B_pt_jet3__74->SetBinContent(26,2);
   _QuadJet_TripleTag_3B_pt_jet3__74->SetBinContent(27,4);
   _QuadJet_TripleTag_3B_pt_jet3__74->SetBinContent(28,1);
   _QuadJet_TripleTag_3B_pt_jet3__74->SetBinContent(29,1);
   _QuadJet_TripleTag_3B_pt_jet3__74->SetBinContent(37,1);
   _QuadJet_TripleTag_3B_pt_jet3__74->SetEntries(10629);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_3B_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 10629  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  70.93");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  24.33");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_3B_pt_jet3__74->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_3B_pt_jet3__74);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_3B_pt_jet3__74->SetLineColor(ci);
   _QuadJet_TripleTag_3B_pt_jet3__74->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_3B_pt_jet3__74->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_3B_pt_jet3__74->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet3__74->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_pt_jet3__74->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet3__74->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_3B_pt_jet3__74->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet3__74->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet3__74->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet3__74->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_pt_jet3__74->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet3__74->Draw("HIST");
   pt_jet3_2016_QuadJet_TripleTag_16_3B->Modified();
   pt_jet3_2016_QuadJet_TripleTag_16_3B->cd();
   pt_jet3_2016_QuadJet_TripleTag_16_3B->SetSelected(pt_jet3_2016_QuadJet_TripleTag_16_3B);
}
