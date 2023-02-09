void H_pt_algo_16_logY()
{
//=========Macro generated from canvas: H_pt_algo_16/H_pt_algo_16
//=========  (Thu Feb  9 09:44:32 2023) by ROOT version 6.14/09
   TCanvas *H_pt_algo_16 = new TCanvas("H_pt_algo_16", "H_pt_algo_16",0,0,600,600);
   H_pt_algo_16->SetHighLightColor(2);
   H_pt_algo_16->Range(-436.7058,-0.137974,2343.266,1.011809);
   H_pt_algo_16->SetFillColor(0);
   H_pt_algo_16->SetFillStyle(4000);
   H_pt_algo_16->SetBorderMode(0);
   H_pt_algo_16->SetBorderSize(2);
   H_pt_algo_16->SetLogy();
   H_pt_algo_16->SetLeftMargin(0.15709);
   H_pt_algo_16->SetRightMargin(0.1234783);
   H_pt_algo_16->SetBottomMargin(0.12);
   H_pt_algo_16->SetFrameFillStyle(1000);
   H_pt_algo_16->SetFrameBorderMode(0);
   H_pt_algo_16->SetFrameFillStyle(1000);
   H_pt_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   st->SetMaximum(85.41247);
   
   TH1F *st_stack_77 = new TH1F("st_stack_77","",40,0,2000);
   st_stack_77->SetMinimum(-3.295719e+09);
   st_stack_77->SetMaximum(-52.41727);
   st_stack_77->SetDirectory(0);
   st_stack_77->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_77->SetLineColor(ci);
   st_stack_77->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_77->GetXaxis()->SetRange(7,30);
   st_stack_77->GetXaxis()->SetLabelFont(42);
   st_stack_77->GetXaxis()->SetLabelSize(0.035);
   st_stack_77->GetXaxis()->SetTitleSize(0.035);
   st_stack_77->GetXaxis()->SetTitleFont(42);
   st_stack_77->GetYaxis()->SetTitle("Events/50.0");
   st_stack_77->GetYaxis()->SetLabelFont(42);
   st_stack_77->GetYaxis()->SetLabelSize(0.035);
   st_stack_77->GetYaxis()->SetTitleSize(0.037);
   st_stack_77->GetYaxis()->SetTitleOffset(0);
   st_stack_77->GetYaxis()->SetTitleFont(42);
   st_stack_77->GetZaxis()->SetLabelFont(42);
   st_stack_77->GetZaxis()->SetLabelSize(0.035);
   st_stack_77->GetZaxis()->SetTitleSize(0.035);
   st_stack_77->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_77);
   
   
   TH1D *VbbHcc_algo_H_pt_stack_1 = new TH1D("VbbHcc_algo_H_pt_stack_1","",40,0,2000);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(1,0.08609304);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(2,0.6289859);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(3,0.6699475);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(4,0.3941479);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(5,0.2323607);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(6,0.1339385);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(7,0.07263859);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(8,0.03741831);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(9,0.02141709);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(10,0.01083159);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(11,0.003229955);
   VbbHcc_algo_H_pt_stack_1->SetBinContent(13,0.003032998);
   VbbHcc_algo_H_pt_stack_1->SetBinError(1,0.0160443);
   VbbHcc_algo_H_pt_stack_1->SetBinError(2,0.04341528);
   VbbHcc_algo_H_pt_stack_1->SetBinError(3,0.0456683);
   VbbHcc_algo_H_pt_stack_1->SetBinError(4,0.03450721);
   VbbHcc_algo_H_pt_stack_1->SetBinError(5,0.02615942);
   VbbHcc_algo_H_pt_stack_1->SetBinError(6,0.02043118);
   VbbHcc_algo_H_pt_stack_1->SetBinError(7,0.01476217);
   VbbHcc_algo_H_pt_stack_1->SetBinError(8,0.01046032);
   VbbHcc_algo_H_pt_stack_1->SetBinError(9,0.009061515);
   VbbHcc_algo_H_pt_stack_1->SetBinError(10,0.005484606);
   VbbHcc_algo_H_pt_stack_1->SetBinError(11,0.003229955);
   VbbHcc_algo_H_pt_stack_1->SetBinError(13,0.003032998);
   VbbHcc_algo_H_pt_stack_1->SetEntries(816);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_1,"");
   
   TH1D *VbbHcc_algo_H_pt_stack_2 = new TH1D("VbbHcc_algo_H_pt_stack_2","",40,0,2000);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(1,0.00930769);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(2,0.07476031);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(3,0.1841772);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(4,0.1758825);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(5,0.09154939);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(6,0.04289471);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(7,0.01845644);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(8,0.006465681);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(9,0.005310627);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(10,0.0007438503);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(11,0.0007534284);
   VbbHcc_algo_H_pt_stack_2->SetBinContent(12,0.0003961915);
   VbbHcc_algo_H_pt_stack_2->SetBinError(1,0.001879904);
   VbbHcc_algo_H_pt_stack_2->SetBinError(2,0.005386355);
   VbbHcc_algo_H_pt_stack_2->SetBinError(3,0.008439978);
   VbbHcc_algo_H_pt_stack_2->SetBinError(4,0.008212232);
   VbbHcc_algo_H_pt_stack_2->SetBinError(5,0.005913803);
   VbbHcc_algo_H_pt_stack_2->SetBinError(6,0.004047864);
   VbbHcc_algo_H_pt_stack_2->SetBinError(7,0.002674809);
   VbbHcc_algo_H_pt_stack_2->SetBinError(8,0.0015571);
   VbbHcc_algo_H_pt_stack_2->SetBinError(9,0.001425747);
   VbbHcc_algo_H_pt_stack_2->SetBinError(10,0.0005259824);
   VbbHcc_algo_H_pt_stack_2->SetBinError(11,0.0005327571);
   VbbHcc_algo_H_pt_stack_2->SetBinError(12,0.0003961915);
   VbbHcc_algo_H_pt_stack_2->SetEntries(1618);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_pt_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_algo_16->Modified();
   H_pt_algo_16->cd();
   H_pt_algo_16->SetSelected(H_pt_algo_16);
}
