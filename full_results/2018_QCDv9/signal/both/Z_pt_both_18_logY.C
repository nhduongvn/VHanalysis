void Z_pt_both_18_logY()
{
//=========Macro generated from canvas: Z_pt_both_18/Z_pt_both_18
//=========  (Thu Feb  9 09:44:34 2023) by ROOT version 6.14/09
   TCanvas *Z_pt_both_18 = new TCanvas("Z_pt_both_18", "Z_pt_both_18",0,0,600,600);
   Z_pt_both_18->SetHighLightColor(2);
   Z_pt_both_18->Range(37.97653,0.3190426,1705.96,3.474326);
   Z_pt_both_18->SetFillColor(0);
   Z_pt_both_18->SetFillStyle(4000);
   Z_pt_both_18->SetBorderMode(0);
   Z_pt_both_18->SetBorderSize(2);
   Z_pt_both_18->SetLogy();
   Z_pt_both_18->SetLeftMargin(0.15709);
   Z_pt_both_18->SetRightMargin(0.1234783);
   Z_pt_both_18->SetBottomMargin(0.12);
   Z_pt_both_18->SetFrameFillStyle(1000);
   Z_pt_both_18->SetFrameBorderMode(0);
   Z_pt_both_18->SetFrameFillStyle(1000);
   Z_pt_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1027.851);
   
   TH1F *st_stack_139 = new TH1F("st_stack_139","",40,0,2000);
   st_stack_139->SetMinimum(4.985131);
   st_stack_139->SetMaximum(1441.444);
   st_stack_139->SetDirectory(0);
   st_stack_139->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_139->SetLineColor(ci);
   st_stack_139->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_139->GetXaxis()->SetRange(7,30);
   st_stack_139->GetXaxis()->SetLabelFont(42);
   st_stack_139->GetXaxis()->SetLabelSize(0.035);
   st_stack_139->GetXaxis()->SetTitleSize(0.035);
   st_stack_139->GetXaxis()->SetTitleFont(42);
   st_stack_139->GetYaxis()->SetTitle("Events/50.0");
   st_stack_139->GetYaxis()->SetLabelFont(42);
   st_stack_139->GetYaxis()->SetLabelSize(0.035);
   st_stack_139->GetYaxis()->SetTitleSize(0.037);
   st_stack_139->GetYaxis()->SetTitleOffset(0);
   st_stack_139->GetYaxis()->SetTitleFont(42);
   st_stack_139->GetZaxis()->SetLabelFont(42);
   st_stack_139->GetZaxis()->SetLabelSize(0.035);
   st_stack_139->GetZaxis()->SetTitleSize(0.035);
   st_stack_139->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_139);
   
   
   TH1D *VbbHcc_both_Z_pt_stack_1 = new TH1D("VbbHcc_both_Z_pt_stack_1","",40,0,2000);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(1,4.452275);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(2,8.444442);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(3,5.431946);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(4,2.712051);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(5,1.43479);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(6,0.8075036);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(7,0.4539245);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(8,0.3126852);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(9,0.1170887);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(10,0.07116198);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(11,0.01569855);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(12,0.0164449);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(13,0.005403213);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(14,0.01318594);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(15,0.005094945);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(16,0.003340468);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(17,0.01218356);
   VbbHcc_both_Z_pt_stack_1->SetBinError(1,0.1132877);
   VbbHcc_both_Z_pt_stack_1->SetBinError(2,0.1560207);
   VbbHcc_both_Z_pt_stack_1->SetBinError(3,0.1218281);
   VbbHcc_both_Z_pt_stack_1->SetBinError(4,0.09839085);
   VbbHcc_both_Z_pt_stack_1->SetBinError(5,0.06930515);
   VbbHcc_both_Z_pt_stack_1->SetBinError(6,0.04834186);
   VbbHcc_both_Z_pt_stack_1->SetBinError(7,0.0348941);
   VbbHcc_both_Z_pt_stack_1->SetBinError(8,0.03507474);
   VbbHcc_both_Z_pt_stack_1->SetBinError(9,0.01784424);
   VbbHcc_both_Z_pt_stack_1->SetBinError(10,0.01381825);
   VbbHcc_both_Z_pt_stack_1->SetBinError(11,0.006045411);
   VbbHcc_both_Z_pt_stack_1->SetBinError(12,0.006791094);
   VbbHcc_both_Z_pt_stack_1->SetBinError(13,0.003837859);
   VbbHcc_both_Z_pt_stack_1->SetBinError(14,0.006029818);
   VbbHcc_both_Z_pt_stack_1->SetBinError(15,0.003612603);
   VbbHcc_both_Z_pt_stack_1->SetBinError(16,0.003340468);
   VbbHcc_both_Z_pt_stack_1->SetBinError(17,0.007578939);
   VbbHcc_both_Z_pt_stack_1->SetEntries(9737);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_both_Z_pt_stack_2 = new TH1D("VbbHcc_both_Z_pt_stack_2","",40,0,2000);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(1,0.685871);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(2,1.834072);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(3,2.144546);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(4,1.39465);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(5,0.7772347);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(6,0.4039717);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(7,0.2024116);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(8,0.1060884);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(9,0.04370963);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(10,0.02273652);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(11,0.009484372);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(12,0.004800335);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(13,0.0008680511);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(14,0.0006678741);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(15,0.0002938073);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(16,0.001067161);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(19,0.0003240891);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(20,0.0003105083);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(21,0.0002658739);
   VbbHcc_both_Z_pt_stack_2->SetBinError(1,0.01649699);
   VbbHcc_both_Z_pt_stack_2->SetBinError(2,0.02911313);
   VbbHcc_both_Z_pt_stack_2->SetBinError(3,0.03176638);
   VbbHcc_both_Z_pt_stack_2->SetBinError(4,0.02330773);
   VbbHcc_both_Z_pt_stack_2->SetBinError(5,0.01668201);
   VbbHcc_both_Z_pt_stack_2->SetBinError(6,0.01245874);
   VbbHcc_both_Z_pt_stack_2->SetBinError(7,0.008458179);
   VbbHcc_both_Z_pt_stack_2->SetBinError(8,0.006265195);
   VbbHcc_both_Z_pt_stack_2->SetBinError(9,0.003849109);
   VbbHcc_both_Z_pt_stack_2->SetBinError(10,0.002810199);
   VbbHcc_both_Z_pt_stack_2->SetBinError(11,0.001777859);
   VbbHcc_both_Z_pt_stack_2->SetBinError(12,0.001248237);
   VbbHcc_both_Z_pt_stack_2->SetBinError(13,0.0006138203);
   VbbHcc_both_Z_pt_stack_2->SetBinError(14,0.0004756561);
   VbbHcc_both_Z_pt_stack_2->SetBinError(15,0.0002938073);
   VbbHcc_both_Z_pt_stack_2->SetBinError(16,0.0006195251);
   VbbHcc_both_Z_pt_stack_2->SetBinError(19,0.0003240891);
   VbbHcc_both_Z_pt_stack_2->SetBinError(20,0.0003105083);
   VbbHcc_both_Z_pt_stack_2->SetBinError(21,0.0002658739);
   VbbHcc_both_Z_pt_stack_2->SetEntries(22486);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_pt_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_both_18->Modified();
   Z_pt_both_18->cd();
   Z_pt_both_18->SetSelected(Z_pt_both_18);
}
