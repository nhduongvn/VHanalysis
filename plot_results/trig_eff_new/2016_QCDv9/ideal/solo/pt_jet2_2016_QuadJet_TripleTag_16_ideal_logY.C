#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_QuadJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet2_2016_QuadJet_TripleTag_16_ideal/pt_jet2_2016_QuadJet_TripleTag_16_ideal
//=========  (Tue Apr 25 23:03:09 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_QuadJet_TripleTag_16_ideal = new TCanvas("pt_jet2_2016_QuadJet_TripleTag_16_ideal", "pt_jet2_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->Range(-100,-0.7816314,566.6667,4.024382);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetLogy();
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet2__242 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet2__242","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(5,105);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(6,1042);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(7,1804);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(8,1846);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(9,1576);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(10,1172);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(11,958);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(12,723);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(13,531);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(14,427);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(15,310);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(16,229);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(17,181);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(18,117);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(19,93);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(20,79);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(21,61);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(22,46);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(23,45);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(24,20);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(25,17);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(26,13);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(27,14);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(28,13);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(29,11);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(30,5);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(31,8);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(32,9);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(33,5);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(34,4);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(35,4);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(36,4);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(37,2);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(39,1);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(41,1);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(42,1);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(43,1);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(44,1);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(45,1);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(46,1);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetEntries(11481);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 11481  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  96.23");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  39.66");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet2__242->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet2__242);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet2__242->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet2__242->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet2__242->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__242->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2__242->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__242->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet2__242->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__242->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__242->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__242->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2__242->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__242->Draw("HIST");
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->Modified();
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->cd();
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetSelected(pt_jet2_2016_QuadJet_TripleTag_16_ideal);
}
