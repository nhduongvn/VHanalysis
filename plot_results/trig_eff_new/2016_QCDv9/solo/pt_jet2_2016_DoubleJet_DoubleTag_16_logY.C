#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_DoubleJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet2_2016_DoubleJet_DoubleTag_16/pt_jet2_2016_DoubleJet_DoubleTag_16
//=========  (Tue Apr 18 16:14:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_DoubleJet_DoubleTag_16 = new TCanvas("pt_jet2_2016_DoubleJet_DoubleTag_16", "pt_jet2_2016_DoubleJet_DoubleTag_16",0,0,600,600);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet2_2016_DoubleJet_DoubleTag_16->Range(-100,-0.7230108,566.6667,3.496797);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetFillColor(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetBorderMode(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetBorderSize(2);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetLogy();
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetLeftMargin(0.15);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_pt_jet2__59 = new TH1D("_DoubleJet_DoubleTag_pt_jet2__59","",50,0,500);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(5,40);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(6,278);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(7,507);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(8,575);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(9,627);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(10,553);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(11,438);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(12,279);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(13,196);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(14,129);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(15,113);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(16,87);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(17,56);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(18,29);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(19,36);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(20,26);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(21,17);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(22,13);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(23,10);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(24,10);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(25,5);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(26,2);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(27,6);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(28,4);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(29,6);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(30,3);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(33,4);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(35,1);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(36,3);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(37,2);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(38,1);
   _DoubleJet_DoubleTag_pt_jet2__59->SetBinContent(40,1);
   _DoubleJet_DoubleTag_pt_jet2__59->SetEntries(4057);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4057   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  97.86");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  37.61");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_pt_jet2__59->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_pt_jet2__59);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_pt_jet2__59->SetLineColor(ci);
   _DoubleJet_DoubleTag_pt_jet2__59->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_pt_jet2__59->GetXaxis()->SetRange(1,50);
   _DoubleJet_DoubleTag_pt_jet2__59->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_pt_jet2__59->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_pt_jet2__59->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_pt_jet2__59->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_pt_jet2__59->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_pt_jet2__59->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_pt_jet2__59->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_pt_jet2__59->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_pt_jet2__59->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_pt_jet2__59->Draw("HIST");
   pt_jet2_2016_DoubleJet_DoubleTag_16->Modified();
   pt_jet2_2016_DoubleJet_DoubleTag_16->cd();
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetSelected(pt_jet2_2016_DoubleJet_DoubleTag_16);
}
