#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2018_QuadJet_TripleTag_18_tagged_logY()
{
//=========Macro generated from canvas: pt_jet2_2018_QuadJet_TripleTag_18_tagged/pt_jet2_2018_QuadJet_TripleTag_18_tagged
//=========  (Tue Apr 25 23:01:41 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2018_QuadJet_TripleTag_18_tagged = new TCanvas("pt_jet2_2018_QuadJet_TripleTag_18_tagged", "pt_jet2_2018_QuadJet_TripleTag_18_tagged",0,0,600,600);
   pt_jet2_2018_QuadJet_TripleTag_18_tagged->SetHighLightColor(2);
   pt_jet2_2018_QuadJet_TripleTag_18_tagged->Range(-100,-0.7829388,566.6667,4.036149);
   pt_jet2_2018_QuadJet_TripleTag_18_tagged->SetFillColor(0);
   pt_jet2_2018_QuadJet_TripleTag_18_tagged->SetBorderMode(0);
   pt_jet2_2018_QuadJet_TripleTag_18_tagged->SetBorderSize(2);
   pt_jet2_2018_QuadJet_TripleTag_18_tagged->SetLogy();
   pt_jet2_2018_QuadJet_TripleTag_18_tagged->SetLeftMargin(0.15);
   pt_jet2_2018_QuadJet_TripleTag_18_tagged->SetFrameBorderMode(0);
   pt_jet2_2018_QuadJet_TripleTag_18_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet2__68 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet2__68","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(5,40);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(6,520);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(7,1332);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(8,1891);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(9,1834);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(10,1610);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(11,1327);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(12,977);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(13,703);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(14,552);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(15,405);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(16,296);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(17,256);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(18,155);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(19,110);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(20,99);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(21,84);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(22,75);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(23,52);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(24,27);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(25,26);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(26,18);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(27,12);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(28,13);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(29,11);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(30,9);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(31,9);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(32,5);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(33,4);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(34,4);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(35,4);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(36,5);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(38,2);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(39,2);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(40,2);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(43,2);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(44,1);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(45,2);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(46,1);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(50,1);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetEntries(12478);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_tagged_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 12478  ");
   ptstats_LaTex = ptstats->AddText("Mean  =    103");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  39.57");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet2__68);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__68->Draw("HIST");
   pt_jet2_2018_QuadJet_TripleTag_18_tagged->Modified();
   pt_jet2_2018_QuadJet_TripleTag_18_tagged->cd();
   pt_jet2_2018_QuadJet_TripleTag_18_tagged->SetSelected(pt_jet2_2018_QuadJet_TripleTag_18_tagged);
}
