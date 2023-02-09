void Z_pt_seljet_16_logY()
{
//=========Macro generated from canvas: Z_pt_seljet_16/Z_pt_seljet_16
//=========  (Thu Feb  9 09:44:39 2023) by ROOT version 6.14/09
   TCanvas *Z_pt_seljet_16 = new TCanvas("Z_pt_seljet_16", "Z_pt_seljet_16",0,0,600,600);
   Z_pt_seljet_16->SetHighLightColor(2);
   Z_pt_seljet_16->Range(37.97653,0.02135607,1705.96,4.787789);
   Z_pt_seljet_16->SetFillColor(0);
   Z_pt_seljet_16->SetFillStyle(4000);
   Z_pt_seljet_16->SetBorderMode(0);
   Z_pt_seljet_16->SetBorderSize(2);
   Z_pt_seljet_16->SetLogy();
   Z_pt_seljet_16->SetLeftMargin(0.15709);
   Z_pt_seljet_16->SetRightMargin(0.1234783);
   Z_pt_seljet_16->SetBottomMargin(0.12);
   Z_pt_seljet_16->SetFrameFillStyle(1000);
   Z_pt_seljet_16->SetFrameBorderMode(0);
   Z_pt_seljet_16->SetFrameFillStyle(1000);
   Z_pt_seljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(12634.2);
   
   TH1F *st_stack_265 = new TH1F("st_stack_265","",40,0,2000);
   st_stack_265->SetMinimum(3.920379);
   st_stack_265->SetMaximum(20471.32);
   st_stack_265->SetDirectory(0);
   st_stack_265->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_265->SetLineColor(ci);
   st_stack_265->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_265->GetXaxis()->SetRange(7,30);
   st_stack_265->GetXaxis()->SetLabelFont(42);
   st_stack_265->GetXaxis()->SetLabelSize(0.035);
   st_stack_265->GetXaxis()->SetTitleSize(0.035);
   st_stack_265->GetXaxis()->SetTitleFont(42);
   st_stack_265->GetYaxis()->SetTitle("Events/50.0");
   st_stack_265->GetYaxis()->SetLabelFont(42);
   st_stack_265->GetYaxis()->SetLabelSize(0.035);
   st_stack_265->GetYaxis()->SetTitleSize(0.037);
   st_stack_265->GetYaxis()->SetTitleOffset(0);
   st_stack_265->GetYaxis()->SetTitleFont(42);
   st_stack_265->GetZaxis()->SetLabelFont(42);
   st_stack_265->GetZaxis()->SetLabelSize(0.035);
   st_stack_265->GetZaxis()->SetTitleSize(0.035);
   st_stack_265->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_265);
   
   
   TH1D *VbbHcc_seljet_Z_pt_stack_1 = new TH1D("VbbHcc_seljet_Z_pt_stack_1","",40,0,2000);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(1,87.46051);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(2,101.9362);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(3,24.98898);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(4,5.986649);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(5,2.033713);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(6,0.8280992);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(7,0.3331847);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(8,0.113672);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(9,0.07407147);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(10,0.02392263);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(11,0.02717813);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(12,0.006612325);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(13,0.008896554);
   VbbHcc_seljet_Z_pt_stack_1->SetBinContent(16,0.002814972);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(1,0.515194);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(2,0.5556116);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(3,0.2719599);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(4,0.1327135);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(5,0.07749951);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(6,0.04916515);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(7,0.03110358);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(8,0.01813815);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(9,0.01455229);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(10,0.008110687);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(11,0.009069387);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(12,0.004168052);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(13,0.005140309);
   VbbHcc_seljet_Z_pt_stack_1->SetBinError(16,0.002814972);
   VbbHcc_seljet_Z_pt_stack_1->SetEntries(79397);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_seljet_Z_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_seljet_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_seljet_Z_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_seljet_Z_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_seljet_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_seljet_Z_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_seljet_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_seljet_Z_pt_stack_2 = new TH1D("VbbHcc_seljet_Z_pt_stack_2","",40,0,2000);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(1,18.62878);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(2,24.40585);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(3,10.56348);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(4,3.54968);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(5,1.183619);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(6,0.4285926);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(7,0.1645459);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(8,0.0659839);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(9,0.02460106);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(10,0.008723823);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(11,0.003434658);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(12,0.00110259);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(13,0.001448893);
   VbbHcc_seljet_Z_pt_stack_2->SetBinContent(15,0.0003799206);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(1,0.08459505);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(2,0.09669095);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(3,0.06351569);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(4,0.03675234);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(5,0.02121609);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(6,0.01277684);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(7,0.007906473);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(8,0.004987236);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(9,0.003036758);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(10,0.00180039);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(11,0.00114719);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(12,0.000638762);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(13,0.0007356144);
   VbbHcc_seljet_Z_pt_stack_2->SetBinError(15,0.0003799206);
   VbbHcc_seljet_Z_pt_stack_2->SetEntries(156964);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_seljet_Z_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_seljet_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_seljet_Z_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_seljet_Z_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_seljet_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_seljet_Z_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_seljet_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Z_pt_stack_1","ZHcc","F");

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
   Z_pt_seljet_16->Modified();
   Z_pt_seljet_16->cd();
   Z_pt_seljet_16->SetSelected(Z_pt_seljet_16);
}
