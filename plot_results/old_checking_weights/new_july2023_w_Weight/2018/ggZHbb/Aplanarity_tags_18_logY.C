void Aplanarity_tags_18_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Thu Aug 10 10:41:19 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2,-4.159473,1.133333,2.363326);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLogy();
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_10 = new TH1D("VbbHcc_tags_Aplanarity_stack_10","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(1,27.13298);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(2,2.865399);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(3,0.6585603);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(4,0.2461566);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(5,0.09156286);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(6,0.04880801);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(7,0.0325587);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(8,0.01562921);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(9,0.01470407);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(10,0.009022926);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(11,0.003223468);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(12,0.002659239);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(13,0.003107062);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(14,0.001400072);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(15,0.0006220662);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(16,0.0006549065);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(17,0.0006488114);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(18,0.002103235);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(1,0.1323036);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(2,0.04296264);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(3,0.02056059);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(4,0.01251902);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(5,0.007639624);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(6,0.005582638);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(7,0.004556627);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(8,0.003137102);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(9,0.003077876);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(10,0.002420245);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(11,0.001455764);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(12,0.001332869);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(13,0.001389708);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(14,0.0009900097);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(15,0.0006220662);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(16,0.0006549065);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(17,0.0006488114);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(18,0.001214381);
   VbbHcc_tags_Aplanarity_stack_10->SetEntries(48968);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Aplanarity_stack_10->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
