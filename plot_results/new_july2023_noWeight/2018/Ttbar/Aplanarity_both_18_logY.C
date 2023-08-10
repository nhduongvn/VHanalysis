void Aplanarity_both_18_logY()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Thu Aug 10 12:33:07 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2,-2.206753,1.133333,5.2157);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLogy();
   Aplanarity_both_18->SetLeftMargin(0.15);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_3 = new TH1D("VbbHcc_both_Aplanarity_stack_3","",50,0,1);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(1,15700.21);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(2,5111.445);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(3,2474.414);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(4,1421.78);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(5,866.5094);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(6,572.2925);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(7,386.1703);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(8,259.2918);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(9,178.8978);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(10,125.2046);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(11,83.78803);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(12,58.3905);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(13,40.64511);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(14,25.4026);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(15,17.88455);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(16,11.03895);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(17,6.78201);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(18,4.52411);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(19,2.167624);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(20,0.7839539);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(21,0.321506);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(22,0.1529247);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(23,0.06863135);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(1,31.13844);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(2,17.77975);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(3,12.37869);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(4,9.386456);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(5,7.327182);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(6,5.956612);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(7,4.900068);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(8,4.011711);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(9,3.323937);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(10,2.786508);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(11,2.282482);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(12,1.901074);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(13,1.585904);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(14,1.254015);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(15,1.059736);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(16,0.8292729);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(17,0.6512805);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(18,0.5314383);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(19,0.359147);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(20,0.2207215);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(21,0.1450801);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(22,0.09115745);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(23,0.06863135);
   VbbHcc_both_Aplanarity_stack_3->SetEntries(458232);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Aplanarity_stack_3->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->Draw("HIST");
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
