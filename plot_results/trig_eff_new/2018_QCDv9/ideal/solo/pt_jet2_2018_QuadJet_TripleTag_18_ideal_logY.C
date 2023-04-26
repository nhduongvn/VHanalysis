#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2018_QuadJet_TripleTag_18_ideal_logY()
{
//=========Macro generated from canvas: pt_jet2_2018_QuadJet_TripleTag_18_ideal/pt_jet2_2018_QuadJet_TripleTag_18_ideal
//=========  (Tue Apr 25 23:01:41 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2018_QuadJet_TripleTag_18_ideal = new TCanvas("pt_jet2_2018_QuadJet_TripleTag_18_ideal", "pt_jet2_2018_QuadJet_TripleTag_18_ideal",0,0,600,600);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetHighLightColor(2);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->Range(-100,-0.7829101,566.6667,4.035891);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetFillColor(0);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetBorderMode(0);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetBorderSize(2);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetLogy();
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetLeftMargin(0.15);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet2__122 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet2__122","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(5,38);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(6,495);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(7,1329);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(8,1890);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(9,1834);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(10,1610);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(11,1327);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(12,977);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(13,703);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(14,552);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(15,405);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(16,296);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(17,256);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(18,155);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(19,110);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(20,99);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(21,84);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(22,75);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(23,52);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(24,27);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(25,26);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(26,18);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(27,12);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(28,13);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(29,11);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(30,9);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(31,9);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(32,5);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(33,4);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(34,4);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(35,4);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(36,5);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(38,2);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(39,2);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(40,2);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(43,2);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(44,1);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(45,2);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(46,1);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(50,1);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetEntries(12447);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 12447  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  103.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  39.55");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet2__122);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__122->Draw("HIST");
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->Modified();
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->cd();
   pt_jet2_2018_QuadJet_TripleTag_18_ideal->SetSelected(pt_jet2_2018_QuadJet_TripleTag_18_ideal);
}
