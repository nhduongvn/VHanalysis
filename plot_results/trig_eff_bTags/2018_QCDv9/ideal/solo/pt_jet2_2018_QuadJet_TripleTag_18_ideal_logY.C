#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2018_QuadJet_TripleTag_18_ideal_logY()
{
//=========Macro generated from canvas: pt_jet2_2018_QuadJet_TripleTag_18_ideal/pt_jet2_2018_QuadJet_TripleTag_18_ideal
//=========  (Tue May  2 10:29:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2018_QuadJet_TripleTag_18_ideal = new TCanvas("pt_jet2_2018_QuadJet_TripleTag_18_ideal", "pt_jet2_2018_QuadJet_TripleTag_18_ideal",0,0,600,600);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetHighLightColor(2);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->Range(-100,-0.6625858,566.6667,2.952972);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetFillColor(0);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetBorderMode(0);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetBorderSize(2);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetLogy();
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetLeftMargin(0.15);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet2__38 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet2__38","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetBinContent(5,2);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetBinContent(6,46);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetBinContent(7,118);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetBinContent(8,168);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetBinContent(9,206);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetBinContent(10,174);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetBinContent(11,133);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetBinContent(12,93);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetBinContent(13,94);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetBinContent(14,51);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetBinContent(15,50);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetBinContent(16,41);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetBinContent(17,25);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetBinContent(18,24);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetBinContent(19,22);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetBinContent(20,7);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetBinContent(21,8);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetBinContent(22,9);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetBinContent(23,7);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetBinContent(24,5);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetBinContent(25,4);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetBinContent(26,3);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetBinContent(28,5);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetBinContent(29,1);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetBinContent(32,2);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetBinContent(33,1);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetBinContent(35,1);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetBinContent(37,1);
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetEntries(1301);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1301   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  106.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =     41");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet2__38->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet2__38);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet2__38->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet2__38->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet2__38->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet2__38->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__38->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2__38->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__38->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet2__38->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__38->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__38->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__38->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2__38->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__38->Draw("HIST");
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->Modified();
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->cd();
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetSelected(pt_jet2_2018_QuadJet_TripleTag_18_ideal);
}
