void Aplanarity_both_16_logY()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Tue Aug 22 09:18:48 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-5.953828,1.133333,3.205691);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLogy();
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_5 = new TH1D("VbbHcc_both_Aplanarity_stack_5","",50,0,1);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(1,102.8466);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(2,28.97034);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(3,16.83353);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(4,6.930609);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(5,3.315419);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(6,2.537537);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(7,1.009089);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(8,0.4611955);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(9,0.6179477);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(10,0.1398866);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(11,0.6361452);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(12,0.3106758);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(14,0.0002539495);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(15,0.0002488406);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(17,1.832965e-05);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(1,4.895098);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(2,6.07486);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(3,5.595874);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(4,1.654468);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(5,0.968545);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(6,0.8379419);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(7,0.3483581);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(8,0.1940988);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(9,0.3359561);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(10,0.1229845);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(11,0.3567504);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(12,0.1911365);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(14,0.0002539495);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(15,0.0002488406);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(17,1.832965e-05);
   VbbHcc_both_Aplanarity_stack_5->SetEntries(3486);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}
