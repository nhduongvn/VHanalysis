#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2017_QuadJet_TripleTag_17_ideal_logY()
{
//=========Macro generated from canvas: pt_jet3_2017_QuadJet_TripleTag_17_ideal/pt_jet3_2017_QuadJet_TripleTag_17_ideal
//=========  (Tue Apr 25 23:02:19 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2017_QuadJet_TripleTag_17_ideal = new TCanvas("pt_jet3_2017_QuadJet_TripleTag_17_ideal", "pt_jet3_2017_QuadJet_TripleTag_17_ideal",0,0,600,600);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal->SetHighLightColor(2);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal->Range(-100,-0.7557978,566.6667,3.79188);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal->SetFillColor(0);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal->SetBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal->SetBorderSize(2);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal->SetLogy();
   pt_jet3_2017_QuadJet_TripleTag_17_ideal->SetLeftMargin(0.15);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet3__128 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet3__128","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(5,362);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(6,1147);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(7,988);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(8,767);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(9,478);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(10,325);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(11,230);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(12,128);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(13,104);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(14,65);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(15,50);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(16,33);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(17,11);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(18,14);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(19,5);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(20,5);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(21,3);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(22,1);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(23,4);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(24,2);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(28,1);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetBinContent(29,1);
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetEntries(4724);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4724   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  75.04");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  25.31");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet3__128->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet3__128);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet3__128->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet3__128->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet3__128->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet3__128->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__128->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3__128->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__128->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet3__128->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__128->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__128->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__128->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3__128->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__128->Draw("HIST");
   pt_jet3_2017_QuadJet_TripleTag_17_ideal->Modified();
   pt_jet3_2017_QuadJet_TripleTag_17_ideal->cd();
   pt_jet3_2017_QuadJet_TripleTag_17_ideal->SetSelected(pt_jet3_2017_QuadJet_TripleTag_17_ideal);
}
