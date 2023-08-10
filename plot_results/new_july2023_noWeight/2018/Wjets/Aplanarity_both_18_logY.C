void Aplanarity_both_18_logY()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Thu Aug 10 12:33:07 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2,-1.629124,1.133333,3.076006);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLogy();
   Aplanarity_both_18->SetLeftMargin(0.15);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_5 = new TH1D("VbbHcc_both_Aplanarity_stack_5","",50,0,1);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(1,212.7863);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(2,70.86178);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(3,25.27535);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(4,14.9415);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(5,8.494855);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(6,2.248119);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(7,4.316842);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(8,1.728031);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(9,0.6617305);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(10,1.140192);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(11,0.5371188);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(12,2.342085);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(13,0.1388096);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(14,0.4041855);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(15,0.386066);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(1,14.99244);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(2,8.075876);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(3,4.552516);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(4,2.611148);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(5,3.07541);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(6,0.583955);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(7,2.184669);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(8,0.5929811);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(9,0.3344673);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(10,0.5613188);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(11,0.3157181);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(12,2.097782);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(13,0.1271571);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(14,0.2199021);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(15,0.2887198);
   VbbHcc_both_Aplanarity_stack_5->SetEntries(2575);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Aplanarity_stack_5->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
