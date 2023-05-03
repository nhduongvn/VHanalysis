#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref/pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref
//=========  (Tue May  2 10:43:26 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref = new TCanvas("pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref", "pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref",0,0,600,600);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref->SetHighLightColor(2);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref->Range(-100,-0.5693776,566.6667,2.114098);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref->SetFillColor(0);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref->SetBorderMode(0);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref->SetBorderSize(2);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref->SetLogy();
   pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref->SetLeftMargin(0.15);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref->SetFrameBorderMode(0);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet1_ref__9 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet1_ref__9","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(7,11);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(8,18);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(9,26);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(10,37);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(11,31);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(12,21);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(13,24);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(14,16);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(15,16);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(16,24);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(17,10);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(18,9);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(19,4);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(20,3);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(21,8);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(22,5);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(23,3);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(24,3);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(25,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(26,3);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(27,2);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(28,4);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(29,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(30,2);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(31,2);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(32,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(35,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(40,2);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(43,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(47,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(49,2);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetEntries(292);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_pt_jet1_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 292    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  139.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  69.34");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet1_ref__9);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->Draw("HIST");
   pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref->Modified();
   pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref->cd();
   pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref->SetSelected(pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref);
}
