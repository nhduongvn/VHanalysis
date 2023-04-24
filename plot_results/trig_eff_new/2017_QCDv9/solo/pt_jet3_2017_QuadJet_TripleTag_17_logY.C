#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2017_QuadJet_TripleTag_17_logY()
{
//=========Macro generated from canvas: pt_jet3_2017_QuadJet_TripleTag_17/pt_jet3_2017_QuadJet_TripleTag_17
//=========  (Tue Apr 18 16:14:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2017_QuadJet_TripleTag_17 = new TCanvas("pt_jet3_2017_QuadJet_TripleTag_17", "pt_jet3_2017_QuadJet_TripleTag_17",0,0,600,600);
   pt_jet3_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   pt_jet3_2017_QuadJet_TripleTag_17->Range(-100,-0.8437903,566.6667,4.583812);
   pt_jet3_2017_QuadJet_TripleTag_17->SetFillColor(0);
   pt_jet3_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   pt_jet3_2017_QuadJet_TripleTag_17->SetLogy();
   pt_jet3_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15);
   pt_jet3_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet3__86 = new TH1D("_QuadJet_TripleTag_pt_jet3__86","",50,0,500);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(5,2536);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(6,5801);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(7,4742);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(8,3251);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(9,1945);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(10,1194);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(11,780);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(12,444);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(13,286);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(14,198);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(15,134);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(16,98);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(17,52);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(18,40);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(19,13);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(20,19);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(21,10);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(22,8);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(23,5);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(24,8);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(25,3);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(26,1);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(27,1);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(28,3);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(29,2);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(30,1);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(32,1);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(33,1);
   _QuadJet_TripleTag_pt_jet3__86->SetBinContent(47,1);
   _QuadJet_TripleTag_pt_jet3__86->SetEntries(21578);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 21578  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  70.81");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  23.34");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_pt_jet3__86->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_pt_jet3__86);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_pt_jet3__86->SetLineColor(ci);
   _QuadJet_TripleTag_pt_jet3__86->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_pt_jet3__86->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_pt_jet3__86->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3__86->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet3__86->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3__86->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_pt_jet3__86->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3__86->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3__86->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3__86->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet3__86->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3__86->Draw("HIST");
   pt_jet3_2017_QuadJet_TripleTag_17->Modified();
   pt_jet3_2017_QuadJet_TripleTag_17->cd();
   pt_jet3_2017_QuadJet_TripleTag_17->SetSelected(pt_jet3_2017_QuadJet_TripleTag_17);
}
