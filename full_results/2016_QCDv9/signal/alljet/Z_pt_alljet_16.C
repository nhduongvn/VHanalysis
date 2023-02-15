#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_alljet_16()
{
//=========Macro generated from canvas: Z_pt_alljet_16/Z_pt_alljet_16
//=========  (Tue Feb 14 15:57:11 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_alljet_16 = new TCanvas("Z_pt_alljet_16", "Z_pt_alljet_16",0,0,600,600);
   Z_pt_alljet_16->SetHighLightColor(2);
   Z_pt_alljet_16->Range(37.97653,-80.62084,1705.96,591.2195);
   Z_pt_alljet_16->SetFillColor(0);
   Z_pt_alljet_16->SetFillStyle(4000);
   Z_pt_alljet_16->SetBorderMode(0);
   Z_pt_alljet_16->SetBorderSize(2);
   Z_pt_alljet_16->SetLeftMargin(0.15709);
   Z_pt_alljet_16->SetRightMargin(0.1234783);
   Z_pt_alljet_16->SetBottomMargin(0.12);
   Z_pt_alljet_16->SetFrameFillStyle(1000);
   Z_pt_alljet_16->SetFrameBorderMode(0);
   Z_pt_alljet_16->SetFrameFillStyle(1000);
   Z_pt_alljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(524.0355);
   
   TH1F *st_stack_201 = new TH1F("st_stack_201","",40,0,2000);
   st_stack_201->SetMinimum(0);
   st_stack_201->SetMaximum(524.0355);
   st_stack_201->SetDirectory(0);
   st_stack_201->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_201->SetLineColor(ci);
   st_stack_201->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_201->GetXaxis()->SetRange(7,30);
   st_stack_201->GetXaxis()->SetLabelFont(42);
   st_stack_201->GetXaxis()->SetTitleOffset(1);
   st_stack_201->GetXaxis()->SetTitleFont(42);
   st_stack_201->GetYaxis()->SetTitle("Events/50.0");
   st_stack_201->GetYaxis()->SetLabelFont(42);
   st_stack_201->GetYaxis()->SetTitleSize(0.037);
   st_stack_201->GetYaxis()->SetTitleFont(42);
   st_stack_201->GetZaxis()->SetLabelFont(42);
   st_stack_201->GetZaxis()->SetTitleOffset(1);
   st_stack_201->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_201);
   
   
   TH1D *VbbHcc_alljet_Z_pt_stack_1 = new TH1D("VbbHcc_alljet_Z_pt_stack_1","",40,0,2000);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(1,349.357);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(2,237.7137);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(3,34.70874);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(4,7.41617);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(5,2.390882);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(6,0.928126);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(7,0.3542112);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(8,0.1229739);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(9,0.07452541);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(10,0.02201528);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(11,0.03002689);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(12,0.006612325);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(13,0.008896554);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(15,0.003218024);
   VbbHcc_alljet_Z_pt_stack_1->SetBinContent(16,0.002814972);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(1,1.046809);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(2,0.8544947);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(3,0.3188853);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(4,0.1468183);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(5,0.08352688);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(6,0.05172002);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(7,0.03194847);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(8,0.01863943);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(9,0.01452399);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(10,0.007883227);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(11,0.009315472);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(12,0.004168052);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(13,0.005140309);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(15,0.003218024);
   VbbHcc_alljet_Z_pt_stack_1->SetBinError(16,0.002814972);
   VbbHcc_alljet_Z_pt_stack_1->SetEntries(234325);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_alljet_Z_pt_stack_2 = new TH1D("VbbHcc_alljet_Z_pt_stack_2","",40,0,2000);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(1,34.38348);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(2,37.81051);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(3,13.19264);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(4,4.19183);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(5,1.370425);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(6,0.4725031);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(7,0.179255);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(8,0.07237734);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(9,0.02564186);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(10,0.008981099);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(11,0.003808373);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(12,0.00110259);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(13,0.001448893);
   VbbHcc_alljet_Z_pt_stack_2->SetBinContent(15,0.0003799206);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(1,0.1148248);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(2,0.1202447);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(3,0.07071313);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(4,0.03973385);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(5,0.02264324);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(6,0.01331602);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(7,0.008172574);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(8,0.005154988);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(9,0.003092773);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(10,0.00181868);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(11,0.001206527);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(12,0.000638762);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(13,0.0007356144);
   VbbHcc_alljet_Z_pt_stack_2->SetBinError(15,0.0003799206);
   VbbHcc_alljet_Z_pt_stack_2->SetEntries(244817);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_alljet_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Z_pt_stack_1","ZHcc","F");

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
   Z_pt_alljet_16->Modified();
   Z_pt_alljet_16->cd();
   Z_pt_alljet_16->SetSelected(Z_pt_alljet_16);
}
