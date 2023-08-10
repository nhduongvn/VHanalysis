void Sphericity_both_17_logY()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Thu Aug 10 12:33:05 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,-3.708301,1.133333,1.312177);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLogy();
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_10 = new TH1D("VbbHcc_both_Sphericity_stack_10","",25,0,1);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(1,3.108033);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(2,3.408637);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(3,2.504753);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(4,1.936716);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(5,1.703696);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(6,1.361216);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(7,1.133172);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(8,0.9980037);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(9,0.8412752);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(10,0.7380335);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(11,0.6335478);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(12,0.5373547);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(13,0.454015);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(14,0.4050891);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(15,0.3180178);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(16,0.2674335);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(17,0.1845084);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(18,0.1409727);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(19,0.08748599);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(20,0.03938943);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(21,0.008707136);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(22,0.002902379);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(23,0.001243877);
   VbbHcc_both_Sphericity_stack_10->SetBinError(1,0.03589805);
   VbbHcc_both_Sphericity_stack_10->SetBinError(2,0.03759399);
   VbbHcc_both_Sphericity_stack_10->SetBinError(3,0.0322263);
   VbbHcc_both_Sphericity_stack_10->SetBinError(4,0.02833746);
   VbbHcc_both_Sphericity_stack_10->SetBinError(5,0.02657811);
   VbbHcc_both_Sphericity_stack_10->SetBinError(6,0.02375699);
   VbbHcc_both_Sphericity_stack_10->SetBinError(7,0.02167584);
   VbbHcc_both_Sphericity_stack_10->SetBinError(8,0.02034202);
   VbbHcc_both_Sphericity_stack_10->SetBinError(9,0.01867657);
   VbbHcc_both_Sphericity_stack_10->SetBinError(10,0.01749307);
   VbbHcc_both_Sphericity_stack_10->SetBinError(11,0.01620756);
   VbbHcc_both_Sphericity_stack_10->SetBinError(12,0.01492652);
   VbbHcc_both_Sphericity_stack_10->SetBinError(13,0.01372028);
   VbbHcc_both_Sphericity_stack_10->SetBinError(14,0.01295995);
   VbbHcc_both_Sphericity_stack_10->SetBinError(15,0.01148296);
   VbbHcc_both_Sphericity_stack_10->SetBinError(16,0.01053018);
   VbbHcc_both_Sphericity_stack_10->SetBinError(17,0.008746535);
   VbbHcc_both_Sphericity_stack_10->SetBinError(18,0.007645317);
   VbbHcc_both_Sphericity_stack_10->SetBinError(19,0.006022784);
   VbbHcc_both_Sphericity_stack_10->SetBinError(20,0.00404127);
   VbbHcc_both_Sphericity_stack_10->SetBinError(21,0.001900053);
   VbbHcc_both_Sphericity_stack_10->SetBinError(22,0.001096996);
   VbbHcc_both_Sphericity_stack_10->SetBinError(23,0.0007181525);
   VbbHcc_both_Sphericity_stack_10->SetEntries(50200);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Sphericity_stack_10->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_17->Modified();
   Sphericity_both_17->cd();
   Sphericity_both_17->SetSelected(Sphericity_both_17);
}
